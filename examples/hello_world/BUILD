package(default_visibility = ["//visibility:public"])

load(
    "@io_bazel_rules_rust//rust:rust.bzl",
    "rust_library",
    "rust_binary",
    "rust_doc",
    "rust_doc_test",
)

rust_binary(
    name = "hello_world",
    srcs = ["src/main.rs"],
    deps = [
        "@examples//hello_lib",
        ":hello_from_c_sys",
        ],
 rustc_flags = [
      "-Clink-args=-lstdc++",
    ],
    
)

rust_library(
    name = "hello_from_c_sys",
    srcs = ["src/lib.rs"],
 rustc_flags = [
      "-Clink-args=-lstdc++",
    ],
    deps = [
        ":hello_from_c",
        ],
)

rust_doc(
    name = "hello_world_doc",
    dep = ":hello_world",
)

rust_doc_test(
    name = "hello_world_doc_test",
    dep = ":hello_world",
)

cc_library(
    name = "hello_from_c",
    srcs = ["hello_from_c.cc"],
)
