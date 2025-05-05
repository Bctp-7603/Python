// 틀렸음. 다시 해보기 !! 필수 !!
#include <stdio.h>

#define MAX_STAIRS 300

int max(int a, int b) {
    return a > b ? a : b;
}

int stair(int stairs[], int n) {
    int dp[MAX_STAIRS + 1] = {0};

    dp[0] = 0;
    dp[1] = stairs[1];
    dp[2] = stairs[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + stairs[i]);
    }

    return dp[n];
}

int main() {
    int n;
    scanf("%d", &n);

    int stairs[n + 1];

    for(int i = 1; i <= n; i++) {
        scanf("%d", &stairs[i]);
    }

    int result = stair(stairs, n);

    printf("%d\n", result);

    return 0;
}