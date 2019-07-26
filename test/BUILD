cc_test(
    name = "unit_test",
    srcs = [
        "test_greet.cpp",
        "test_mock.cpp",
    ],
    copts = [
        "-std=c++11",
    ],
    deps = [
        "//lib:greet",
        "@gtest",
        "@gtest//:gtest_main",
    ],
)
