load("@rules_python//python:defs.bzl", "py_library")
load("@pip_deps//:requirements.bzl", "requirement")

package(default_visibility = ["//visibility:public"])

py_library(
    name = "pymavlink",
    deps = [
        requirement("fastcrc"),
        requirement("future"),
        requirement("h11"),
        requirement("iniconfig"),
        requirement("lxml"),
        requirement("packaging"),
        requirement("pluggy"),
        requirement("pymavlink"),
        requirement("pytest"),
        requirement("syrupy"),
        requirement("wheel"),
        requirement("wsproto"),
    ],
)
