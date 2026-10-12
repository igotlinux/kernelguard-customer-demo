#include <cstddef>

extern "C" float dot_product(const float* __restrict__ a, const float* __restrict__ b, int n) {
    float sum = 0.0f;
    #pragma clang loop vectorize(enable)
    #pragma GCC ivdep
    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }
    return sum;
}
