enable_testing()
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

if (MSVC)
    add_definitions(-D_VARIADIC_MAX=10)
endif()

add_subdirectory(client)
add_subdirectory(master)
add_subdirectory(chunk-server)
