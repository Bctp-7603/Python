#include <stdio.h>

/*
long long int fibonacci(int n) {
    long long int d[90];
    d[0] = 0;
    d[1] = 1;
    for(int i = 2; i <= n; i++) {
        d[i] = d[i - 1] + d[i - 2];
    }
    return d[n];
}
*/

int main() {
    int n;
    long long int num[90];
    scanf("%d", &n);

    num[0] = 0;
    num[1] = 1;

    for(int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }

    printf("%lld\n", num[n]);

    return 0;
}