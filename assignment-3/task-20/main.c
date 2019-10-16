/*
 * Program solves this equation: 3x^3 - 4x^2 + 9x +5 = 0 ( ^ means exponent)
 * 111019 Johanna Lyytinen
 */


#include <stdio.h>
#include <math.h>

const double range_min = -100;
const double range_max = 100;
const double threshold = 1E-3;
const double delta = 1E-4;

double apply(double x) {
    return 3 * pow(x, 3) - 4 * pow(x, 2) + 9 * x + 5;
}

int main() {
    for (double i = range_min; i <= range_max; i += delta) {
        if (fabs(apply(i)) < threshold) {
            printf("Yhtälön yksi ratkaisu on %.3f.\n", i);
            break;
        }
    }
    return 0;
}

