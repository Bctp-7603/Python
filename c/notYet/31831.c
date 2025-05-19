#include <stdio.h>

int main() {
    int n, m, sum = 0, count = 0;
    scanf("%d %d", &n, &m);

    int num[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n; i++) {
        if(num[i] < 0) {
            if(sum <= 0) continue;
        }
        sum += num[i];
        if(sum >= m) count++;
    }

    printf("%d\n", count);

    return 0;
}