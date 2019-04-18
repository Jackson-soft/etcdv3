#!/bin/bash
set -u

folder=build

if [ ! -d "$folder" ]; then
    mkdir $folder
fi

cd $folder

cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=YES

make

cd ..

file="compile_commands.json"

if [ ! -f "$file" ]; then
    ln -s $folder/$file
fi