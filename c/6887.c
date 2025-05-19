#include <stdio.h>

int main() {
    int num, ans = 1;

    scanf("%d", &num);

    while(ans * ans <= num)
        ans++;

    printf("The largest square has side length %d.\n", ans - 1);

    return 0;
}