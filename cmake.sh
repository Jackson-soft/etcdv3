#!/bin/bash
set -u

folder="build"
if [ -d "$folder" ]; then
	cmake --build $dir --config Release -j 4
	exit 0
fi

mkdir -p $folder

cd $folder

conan install .. -b missing -u

cmake -S .. -GNinja -DCMAKE_EXPORT_COMPILE_COMMANDS=YES

cmake --build . --config Release -j 4

lnFile="compile_commands.json"

if [ ! -f "../$lnFile" ]; then
	ln -s $lnFile ..
fi
