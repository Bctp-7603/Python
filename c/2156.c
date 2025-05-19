#include <stdio.h>

#define MAX 10001

int max(int a, int b) {
    return a > b ? a : b;
}

int grape(int wine[], int n) {
    int dp[MAX] = {0};

    dp[0] = 0;
    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max(
            max(dp[i - 1], dp[i - 2] + wine[i]), // i번째 잔을 안마시는 경우도 고려해야함.
            dp[i - 3] + wine[i - 1] + wine[i]
        );
        // printf("dp[%d] = %d\n", i, dp[i]);
    }

    return dp[n];
}

int main() {
    int n;
    int wine[MAX];

    scanf("%d", &n);

    wine[0] = 0;

    for(int i = 1; i <= n; i++) {
        scanf("%d", &wine[i]);
    }

    int result = grape(wine, n);

    printf("%d\n", result);

    return 0;
}