#!/bin/bash

set -u

folder="proto"

protoc -I $folder --grpc_out=$folder --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $folder/rpc.proto
protoc -I $folder --cpp_out=$folder $folder/*.proto

include="include"
src="src"

if [ ! -d "$include/$folder" ]; then
    mkdir -p $include/$folder
else
    rm -rf $include/$folder/*
fi

if [ ! -d "$src/$folder" ]; then
    mkdir -p $src/$folder
else
    rm -rf $src/$folder/*
fi

mv $folder/*.h $include/$folder
mv $folder/*.cc $src/$folder