#include <cstddef>

extern "C" void saxpy(int n, float a, const float* __restrict__ x, float* __restrict__ y) {
    #pragma clang loop vectorize(enable)
    #pragma GCC ivdep
    for (int i = 0; i < n; ++i) {
        y[i] = a * x[i] + y[i];
    }
}
