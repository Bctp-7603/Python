#include <stdio.h>
#include <math.h>

int main() {
    double N, K = 0, d;

    scanf("%lf", &N);

    if(N < 3 || N > 10101) return 0;

    d = sqrt(1 - (4 * (1 - N)));

    K = (-1 + d) / 2;

    printf("%.0lf\n", K);

    return 0;
}