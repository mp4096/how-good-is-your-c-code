#include <stdio.h>
#include <stddef.h>
#include <math.h>

double euclidean_norm(const double x[restrict], const size_t len) {
    double acc = 0.0;
    for (size_t i = 0; i < len; i++) { acc += x[i]*x[i]; }
    return sqrt(acc);
}


int main(void) {
    const double foo[2] = {3.0, 4.0};
    const double bar[2] = {3.0e200, 4.0e200};

    printf("%f\n", euclidean_norm(foo, 2)); // 5.000000
    printf("%f\n", euclidean_norm(bar, 2)); // inf

}
