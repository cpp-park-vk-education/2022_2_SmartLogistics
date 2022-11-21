#!/usr/bin/env bash

CODE_FILES="./src/*.cpp ./include/*.hpp"

set -e pipefail

clang-format -i $CODE_FILES
