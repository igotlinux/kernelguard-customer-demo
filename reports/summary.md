## ✅ KernelGuard Verification Summary (`quick` profile)

- **Host Platform:** `darwin` (arm64)
- **Tests Evaluated:** **36** | **Passed:** 36 | **Failed:** 0 | **Skipped:** 0

### Key Verification Results
| Kernel | Status | Toolchain | Opt | FP Mode | Vectorized | Verdict | Details |
| :--- | :---: | :--- | :---: | :--- | :---: | :--- | :--- |
| `fast_relu` | ✅ PASS | `gcc` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `fast_relu` | ✅ PASS | `gcc` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `fast_relu` | ✅ PASS | `gcc` | `-O2` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `fast_relu` | ✅ PASS | `gcc` | `-O2` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `fast_relu` | ✅ PASS | `gcc` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `fast_relu` | ✅ PASS | `gcc` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `fast_relu` | ✅ PASS | `clang` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `fast_relu` | ✅ PASS | `clang` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `fast_relu` | ✅ PASS | `clang` | `-O2` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `fast_relu` | ✅ PASS | `clang` | `-O2` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `fast_relu` | ✅ PASS | `clang` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `fast_relu` | ✅ PASS | `clang` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `saxpy` | ✅ PASS | `gcc` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `saxpy` | ✅ PASS | `gcc` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `saxpy` | ✅ PASS | `gcc` | `-O2` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `saxpy` | ✅ PASS | `gcc` | `-O2` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `saxpy` | ✅ PASS | `gcc` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `saxpy` | ✅ PASS | `gcc` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `saxpy` | ✅ PASS | `clang` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `saxpy` | ✅ PASS | `clang` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `saxpy` | ✅ PASS | `clang` | `-O2` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `saxpy` | ✅ PASS | `clang` | `-O2` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `saxpy` | ✅ PASS | `clang` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `saxpy` | ✅ PASS | `clang` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `dot_product` | ✅ PASS | `gcc` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `dot_product` | ✅ PASS | `gcc` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `dot_product` | ✅ PASS | `gcc` | `-O2` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `dot_product` | ✅ PASS | `gcc` | `-O2` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `dot_product` | ✅ PASS | `gcc` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `dot_product` | ✅ PASS | `gcc` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `dot_product` | ✅ PASS | `clang` | `-O0` | `strict` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `dot_product` | ✅ PASS | `clang` | `-O0` | `fast-math` | - | `PASS` | Numerical contract verified (vectorized: False) |
| `dot_product` | ✅ PASS | `clang` | `-O2` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `dot_product` | ✅ PASS | `clang` | `-O2` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `dot_product` | ✅ PASS | `clang` | `-O3` | `strict` | Yes | `PASS` | Numerical contract verified (vectorized: True) |
| `dot_product` | ✅ PASS | `clang` | `-O3` | `fast-math` | Yes | `PASS` | Numerical contract verified (vectorized: True) |

> Generated automatically by [KernelGuard](https://github.com/igotlinux/kernal-guard)
