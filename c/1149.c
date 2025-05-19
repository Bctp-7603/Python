// 꼭 다시 풀어볼 것 !!
// https://velog.io/@kimmainsain/C%EC%96%B8%EC%96%B4-%EB%B0%B1%EC%A4%80-1149-RGB%EA%B1%B0%EB%A6%AC

#include <stdio.h>

// #define RGB 3 // 0 : red, 1 : green, 2 : blue
#define MAX_HOUSE 1001

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    int cost[MAX_HOUSE][3] = {0};
    int dp[MAX_HOUSE][3] = {0};

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
    }

    dp[1][0] = cost[1][0];
    dp[1][1] = cost[1][1];
    dp[1][2] = cost[1][2];

    for(int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0]; // 빨강
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + cost[i][1]; // 초록
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + cost[i][2]; // 파랑
    }

    int result = min(min(dp[n][0], dp[n][1]), dp[n][2]);

    printf("%d\n", result);

    return 0;
}