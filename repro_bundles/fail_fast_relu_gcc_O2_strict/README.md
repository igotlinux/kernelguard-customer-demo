# KernelGuard Failure Reproducer: `fail_fast_relu_gcc_O2_strict`

- **Kernel:** `fast_relu`
- **Classification:** `MISMATCH`
- **Target Hardware:** `darwin arm64`
- **Compiler Version:** `g++ (Homebrew GCC 15.2.0) 15.2.0`
- **Details:** Error: Unknown kernel 'fast_relu_vectorized'


## Quick Reproduction
Run the standalone reproduction script:
```bash
./build.sh
```
Or manually compile and run:
```bash
g++ -O2 repro.cpp -o repro
./repro
```
