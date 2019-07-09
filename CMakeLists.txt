cmake_minimum_required(VERSION 3.10)

project(etcdv3)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "-g -Wall") # 开启所有警告
set(CMAKE_CXX_FLAGS_DEBUG "-o0") # 调试不优化
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG")

find_package(Protobuf REQUIRED)
# find_package(gRPC REQUIRED)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR}/src DIR_SRCS)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include
                    ${CMAKE_CURRENT_LIST_DIR}/proto)

add_executable(${PROJECT_NAME} ${DIR_SRCS})

target_link_libraries(${PROJECT_NAME}
                      pthread
                      grpc++_reflection
                      grpc++)
