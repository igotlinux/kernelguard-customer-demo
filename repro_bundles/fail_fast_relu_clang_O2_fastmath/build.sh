#!/usr/bin/env bash
# Exact build command for reproducing failure fail_fast_relu_clang_O2_fastmath
set -e
echo "Compiling standalone reproducer with compiler: Apple clang version 17.0.0 (clang-1700.6.4.2)"
g++ -O2 repro.cpp -o repro
echo "Running reproducer:"
./repro
