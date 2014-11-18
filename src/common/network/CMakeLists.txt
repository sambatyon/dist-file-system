find_package(Protobuf REQUIRED)

include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
PROTOBUF_GENERATE_CPP(proto_srcs proto_hdrs addressbook.proto)

add_executable(network main.cc ${proto_hdrs} ${proto_srcs})
target_link_libraries(network ${PROTOBUF_LIBRARIES})
