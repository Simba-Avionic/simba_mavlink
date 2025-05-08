load("@rules_python//python:defs.bzl", "py_binary")
py_binary(
    name = "gen_mavlink_defs",
    srcs = ["gen_mavlink_defs.py"],
    imports = ["."],
    deps = [
        "//third_party/python:pymavlink"
    ],
    visibility = ["//visibility:public"],
)