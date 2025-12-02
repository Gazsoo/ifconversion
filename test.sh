#!/bin/bash
echo "hello"
g++ -std=c++23 a.cpp -static -O2 -fno-if-conversion -fno-if-conversion2
sudo perf stat -e branches,branch-misses -- ./a.out

