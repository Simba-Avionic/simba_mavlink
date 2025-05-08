load("@rules_python//python:repositories.bzl", "py_repositories", "python_register_toolchains")

def install():
    py_repositories()
    python_register_toolchains(
        name = "python_3_11",
        # Available versions are listed in @rules_python//python:versions.bzl.
        # We recommend using the same version your team is already standardized on.
        python_version = "3.11",
    )
