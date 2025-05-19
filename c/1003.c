#include <stdio.h>

int fibonacci(int n) {
    int num[41];
    num[0] = 0;
    num[1] = 1;
    for(int i = 2; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
    }

    return num[n];
}

int main() {
    int T, N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d", &N);
        if(N == 0)
            printf("%d %d\n", 1, 0);
        else if(N == 1)
            printf("%d %d\n", 0, 1);
        else
            printf("%d %d\n", fibonacci(N - 1), fibonacci(N));
    }

    return 0;
}