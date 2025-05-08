load("@rules_python//python:pip.bzl", "pip_parse")

def install_python():
    pip_parse(
        name = "pip_deps",
        requirements_lock = "//third_party/python:requirements.txt",
    )
