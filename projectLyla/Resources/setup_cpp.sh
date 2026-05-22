#!/bin/bash

export PATH=$PATH:/c/msys64/ucrt64/bin
# Copy the files
cp ./SourceCode/scode_name.cpp ./essentials/linker/
cp ./HeaderFiles/hfile_name.h ./essentials/linker/

# Compile
g++ ./essentials/linker/scode_name.cpp -o ./essentials/exes/scode_name.exe

# Run it
./essentials/exes/scode_name.exe