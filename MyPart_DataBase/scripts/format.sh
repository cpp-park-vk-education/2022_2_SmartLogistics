#!/usr/bin/env bash

CODE_FILES="./src/logic.cpp ./include/*.hpp ./test/*.cpp"

set -e pipefail

clang-format -i $CODE_FILES