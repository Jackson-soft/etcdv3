cmake_minimum_required(VERSION 3.13)

project(etcdv3
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS "-g -Wall")# 开启所有警告
set(CMAKE_CXX_FLAGS_DEBUG "-o0")# 调试不优化
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

find_package(Protobuf REQUIRED)
#find_package(gRPC CONFIG REQUIRED)

# 设置库的输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/lib)

add_subdirectory(etcdapi)

# example
set(Example_CXX example)
add_executable(${Example_CXX} example/main.cpp)
target_include_directories(
    ${unit_test}
    PRIVATE ${PROJECT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_LIST_DIR}/etcdapi
)
target_link_libraries(${Example_CXX} pthread ${gRPC_LIBRARIES}
    ${Protobuf_LIBRARIES} etcdapi)

# test
set(unit_test my_test)
add_executable(${unit_test} test/main.cpp)
target_include_directories(
    ${unit_test}
    PRIVATE ${PROJECT_SOURCE_DIR}/include
            ${Catch2_INCLUDE_DIRS}
)
target_link_libraries(${unit_test} pthread ${gRPC_LIBRARIES}
    ${Protobuf_LIBRARIES} etcdapi)

enable_testing()

add_test(NAME doctest COMMAND $<TARGET_FILE:${unit_test}> --success)
