#!/bin/bash
set -u

folder="proto"
output="etcdapi"

protoc -I $folder --grpc_out=$output --plugin=protoc-gen-grpc=$(which grpc_cpp_plugin) $folder/rpc.proto
protoc -I $folder --cpp_out=$output $folder/*.proto
