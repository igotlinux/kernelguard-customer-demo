// Standalone KernelGuard Reproducer
// Failure ID: fail_fast_relu_gcc_O0_fastmath
// Kernel: fast_relu
// Classification: MISMATCH
// Details: Error: Unknown kernel 'fast_relu_vectorized'

// Compiler: g++ (Homebrew GCC 15.2.0) 15.2.0

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {
    const size_t N = 4;
    float input_a[N] = {1.00000000e+00f, 2.00000000e+00f, 3.00000000e+00f, 4.00000000e+00f};
    float expected[N] = {2.00000000e+00f, 4.00000000e+00f, 6.00000000e+00f, 8.00000000e+00f};
    float actual[N] = {0.0f};

    std::cout << "Running reproducer for fast_relu (N=" << N << ")...\n";

    // Replicate operation
    for (size_t i = 0; i < N; ++i) {
        actual[i] = input_a[i] + input_a[i]; // Sample reproduction logic
    }

    std::cout << "Results inspection:\n";
    for (size_t i = 0; i < N; ++i) {
        std::cout << "  [" << i << "] input=" << input_a[i]
                  << " actual=" << actual[i]
                  << " expected=" << expected[i] << "\n";
    }

    std::cout << "Reproduction finished.\n";
    return 0;
}
