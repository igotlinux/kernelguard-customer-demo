# KernelGuard Failure Reproducer: `fail_fast_relu_clang_O2_strict`

- **Kernel:** `fast_relu`
- **Classification:** `MISMATCH`
- **Target Hardware:** `darwin arm64`
- **Compiler Version:** `Apple clang version 17.0.0 (clang-1700.6.4.2)`
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
