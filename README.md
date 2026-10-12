# Apex AI Kernels (Customer Demo Repository)

This is a customer repository showcasing automated compiler verification and regression testing using **KernelGuard**.

## 🛡️ KernelGuard Verification
This repository uses the commercial KernelGuard Pro verification engine in CI/CD runners to verify floating-point contracts across GCC and Clang compilers.

```bash
export KG_API_URL="http://127.0.0.1:8000"
export KG_LICENSE_KEY="<YOUR_LICENSE_TOKEN>"
kg run --profile quick
```
