enable_testing()
file(GLOB client_test_srcs "*.cc")
file(GLOB client_test_hdrs "*.hh")

add_executable(client_tests ${client_test_hdrs} ${client_test_srcs})
target_link_libraries(client_tests ${GTEST_BOTH_LIBRARIES})

add_test(AllClientTests client_tests)
