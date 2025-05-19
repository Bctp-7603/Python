#include <stdio.h>

int main() {
    int N, res1, res2;
    int temp = 0;

    scanf("%d", &N);

    res1 = N * 0.78;
    temp = (N * 0.2) * 0.78;
    res2 = N * 0.8 + temp;

    printf("%d %d\n", res1, res2);

    return 0;
}