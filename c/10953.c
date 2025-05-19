#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count);

    int a[count], b[count], sum[count];

    for(int i = 0; i < count; i++) {
        scanf("%d,%d", &a[i], &b[i]);
        sum[i] = a[i] + b[i];
    }

    for(int i = 0; i < count; i++) {
        printf("%d\n", sum[i]);
    }

    return 0;
}