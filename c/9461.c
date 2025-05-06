#include <stdio.h>

#define MAX 101

long long int triangle(int n) {
    long long int dp[MAX] = {0};

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    for(int i = 6; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    return dp[n];
}

int main() {
    int t, n;

    scanf("%d", &t);

    for(int i = 1; i <= t; i++) {
        scanf("%d", &n);
        printf("%lld\n", triangle(n));
    }

    return 0;
}