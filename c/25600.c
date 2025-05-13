#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n], d[n], g[n], res[n];

    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &a[i], &d[i], &g[i]);
    }

    for(int i = 0; i < n; i++) {
        if(a[i] == (d[i] + g[i])) {
            res[i] = 2 * (a[i] * (d[i] + g[i]));
        }
        else res[i] = a[i] * (d[i] + g[i]);
    }

    int max = -999;

    for(int i = 0; i < n; i++) {
        if(res[i] > max) {
            max = res[i];
        }
    }

    printf("%d\n", max);

    return 0;
}