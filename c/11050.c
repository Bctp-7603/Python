#include <stdio.h>

int factorial(int n) {
    int result = 1;

    for(int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main() {
    int n, k, result;

    scanf("%d %d", &n, &k);

    if(n < 1 || n > 10) return 0;
    if(k < 0 || k > n) return 0;

    result = factorial(n) / (factorial(n-k) * factorial(k));

    printf("%d\n", result);

    return 0;
}

/*
계산을 최적화 하기 위해 분자와 분모를 동시에 처리하는 반복문이 있음.
int binomialCoefficient(int n, int k) {
    // C(n, k) = C(n, n-k)로 최적화 (k가 n/2보다 클 때 더 효율적)
    if (k > n - k) {
        k = n - k;  // 계산을 최소화하기 위해 k를 작은 값으로 설정
    }

    int result = 1;
    for (int i = 1; i <= k; i++) {
        // 분자: n - (k - i)
        // 분모: i
        result = result * (n - (k - i)) / i;  // 계산 중 나누기
    }
    return result;
}
이해안가면 chatGPT한테 물어보기. 잘 알려줌.
*/