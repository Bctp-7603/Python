#include <stdio.h>

int main() {
    int n, arr[100];
    int count_mod = 0, result = 0;

    scanf("%d", &n);

    if(n < 1 || n > 100) return 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < 1 || arr[i] > 1000) return 0;
    }

    // 소수 구하는 알고리즘 다시 공부하기.
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 2) {
            for(int j = 2; j <= arr[i]; j++) {
                if (j == arr[i])
                    result++;
                if (arr[i] % j == 0)
                    break;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}