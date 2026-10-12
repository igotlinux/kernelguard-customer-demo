#!/usr/bin/env bash
# Exact build command for reproducing failure fail_fast_relu_gcc_O2_strict
set -e
echo "Compiling standalone reproducer with compiler: g++ (Homebrew GCC 15.2.0) 15.2.0"
g++ -O2 repro.cpp -o repro
echo "Running reproducer:"
./repro
