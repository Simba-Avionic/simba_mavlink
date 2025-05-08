load("//:mavlink_gen.bzl", "mavlink_gen")

mavlink_gen(
    name = "lib",
)

cc_library(
    name = "test_bin",
    deps = ["//test:lib"],
    srcs = ["main.cpp"],
)

cc_test(
    name = "testsuite_mavlink",
    deps = ["//test:lib"],
    srcs = ["test.c"],
    copts = [""],
)
