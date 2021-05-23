#!/bin/bash

cmake -B cmake-build
cmake --build cmake-build

cd cmake-build
GTEST_COLOR=TRUE ctest --output-on-failure
cd -

