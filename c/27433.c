#include <stdio.h>

int main() {
    int N;
    long long res = 1;

    scanf("%d", &N);

    for(int i = N; i > 0; i--) {
        res *= i;
    }

    printf("%lld\n", res);

    return 0;
}