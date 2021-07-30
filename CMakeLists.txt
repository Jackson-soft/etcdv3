cmake_minimum_required(VERSION 3.13)

project(etcdv3 CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-g -Wall") # 开启所有警告
set(CMAKE_CXX_FLAGS_DEBUG "-o0") # 调试不优化
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake ${CMAKE_BINARY_DIR})

find_package(Protobuf REQUIRED)
find_package(gRPC REQUIRED)

#[[
set(PROTOS ${CMAKE_CURRENT_SOURCE_DIR}/protos/helloworld.proto)

set(PROTO_SRC_DIR ${CMAKE_CURRENT_BINARY_DIR}/proto-src)
file(MAKE_DIRECTORY ${PROTO_SRC_DIR})
include_directories(${PROTO_SRC_DIR})

protobuf_generate_cpp(PROTO_SRCS
                      PROTO_HDRS
                      ${PROTO_SRC_DIR}
                      ${PROTOS})
grpc_generate_cpp(GRPC_SRCS
                  GRPC_HDRS
                  ${PROTO_SRC_DIR}
                  ${PROTOS})
]]

# 设置库的输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/lib)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include
                    ${CMAKE_CURRENT_LIST_DIR}/etcdapi ${Protobuf_INCLUDE_DIRS})

add_subdirectory(etcdapi)

# example
set(Example_CXX example)
add_executable(${Example_CXX} example/main.cpp)
target_link_libraries(${Example_CXX} pthread ${gRPC_LIBRARIES}
                      ${Protobuf_LIBRARIES} etcdapi)

# test
set(Test_Case test)
add_executable(${Test_Case} test/main.cpp)
target_link_libraries(${Test_Case} pthread ${gRPC_LIBRARIES}
                      ${Protobuf_LIBRARIES} etcdapi)

enable_testing()

add_test(NAME doctest COMMAND $<TARGET_FILE:${unit_test}> --success)
