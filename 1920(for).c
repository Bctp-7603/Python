// 반복문으로 코드를 짤 시 시간초과 뜸.

#include <stdio.h>
#include <math.h>

#define MAX 100000

int main() {
    int count_n, count_m, more;
    int n[MAX], m[MAX], result[MAX];
    result[0] = 0;

    scanf("%d", &count_n);

    for(int i = 0; i < count_n; i++) {
        scanf("%d", &n[i]);
        if(n[i] < pow(-2, 31) && n[i] > pow(2, 31)) return 0;
    }

    scanf("%d", &count_m);

    for(int i = 0; i < count_m; i++) {
        scanf("%d", &m[i]);
        if(m[i] < pow(-2, 31) && m[i] > pow(2, 31)) return 0;
    }

    for(int i = 0; i < count_m; i++) {
        for(int j = 0; j < count_n; j++) {
            if(m[i] == n[j]) result[i]++;
        }
    }

    for(int i = 0; i < count_m; i++) {
        if(result[i] > 0) result[i] = 1;
        printf("%d\n", result[i]);
    }

    return 0;
}