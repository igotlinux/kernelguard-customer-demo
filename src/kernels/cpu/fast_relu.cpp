#include <cmath>

extern "C" void fast_relu(const float* __restrict__ in, float* __restrict__ out, int n) {
    #pragma clang loop vectorize(enable)
    #pragma GCC ivdep
    for (int i = 0; i < n; ++i) {
        out[i] = (in[i] > 0.0f) ? in[i] : 0.0f;
    }
}
