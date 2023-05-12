#!/bin/bash
g++ $1 -o compiled.out && ./compiled.out < input.txt

# sh run.sh testFile.cpp