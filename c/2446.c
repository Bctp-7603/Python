#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = n; i > 0; i--) {
        for(int a = 0; a < n - i; a++)
            printf(" ");
        for(int b = 2 * i - 1; b >= 1; b--)
            printf("*");
        printf("\n");
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= (n - i); j++) {
            printf(" ");
        }
        for(int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    return 0;
}