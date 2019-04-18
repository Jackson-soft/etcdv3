#!/bin/bash

set -u

folder="./proto"

protoc -I $folder --grpc_out=$folder --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $folder/rpc.proto
protoc -I $folder --cpp_out=$folder $folder/*.proto