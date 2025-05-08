def _mavlink_repo_impl(ctx):
    xml_file = ctx.read(ctx.attr.xml)
    headers = []

    for line in xml_file.splitlines():
        if "<message" in line and 'name="' in line:
            name = line.split('name="')[1].split('"')[0]
            headers.append("mavlink_msg_%s.h" % name.lower())

    # Zapisz pliki dummy .h
    for h in headers:
        ctx.file(h, "// generated")

    # Wygeneruj BUILD.bazel
    build = ""
    build +='load("@rules_python//python:py_binary.bzl", "py_binary")\n'
    build += '''
filegroup(
    name = "simba",
    srcs = ["simba.xml", "gen_mavlink_defs.py", "requiremets_lock.txt"],
)

py_binary(
    name = "mavgen_wrapper",
    srcs = ["gen_mavlink_defs.py"],
    main = "gen_mavlink_defs.py",
    data = ["simba.xml",],
    deps = [
        "@pypi//pymavlink",
        "@pypi//lxml",
        "@pypi//future",
        "@pypi//wheel",
        "@pypi//fastcrc",
    ],
)   
cc_library(
    name = "mavlink_lib",
    hdrs = glob(["gen/mavlink/**/*.h"]),
    includes = ["gen/mavlink"],
    deps = [],
    visibility = ["//visibility:public"],
)\n
'''
    build += 'genrule(\n'
    build += '    name = "generate_all",\n'
    build += '    srcs = [],\n'
    build += '    outs = [\n'
    build += '    "gen/mavlink/protocol.h",\n'
    build += '    "gen/mavlink/checksum.h",\n'
    build += '    "gen/mavlink/mavlink_conversions.h",\n'
    build += '    "gen/mavlink/mavlink_helpers.h",\n'
    build += '    "gen/mavlink/mavlink_types.h",\n'
    build += '    "gen/mavlink/simba/mavlink.h",\n'
    build += '    "gen/mavlink/simba/simba.h",\n'
    build += '    "gen/mavlink/simba/testsuite.h",\n'
    build += '    "gen/mavlink/simba/version.h",\n'
    for h in headers:
        build += '        "%s",\n' % h
    build += '    ],\n'
    build += '''
        cmd = "$(location :mavgen_wrapper) $(GENDIR)/gen/mavlink",
        tools = [":mavgen_wrapper"],
        output_to_bindir = True,
    )
    '''
    ctx.file("BUILD.bazel", build)

mavlink_repository = repository_rule(
    implementation = _mavlink_repo_impl,
    attrs = {
        "xml": attr.label(mandatory = True, allow_single_file = True),
    },
)
