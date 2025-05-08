load("@rules_python//python:defs.bzl", "py_binary")
load("//:mavlink_gen.bzl", "mavlink_gen")
py_binary(
    name = "gen_mavlink_defs",
    srcs = ["gen_mavlink_defs.py"],
    imports = ["."],
    deps = [
        "//third_party/python:pymavlink"
    ],
    visibility = ["//visibility:public"],
)

filegroup(
    name = "src",
    srcs = ["simba.xml"],
    visibility = ["//visibility:public"],
)

mavlink_gen(
    name = "test",
)