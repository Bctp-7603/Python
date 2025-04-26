#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int a = n - 1; a >= i; a--)
            printf(" ");
        for(int b = 1; b <= i; b++)
            printf("*");
        printf("\n");
    }

    for(int i = 1; i <= n - 1; i++) {
        for(int c = 1; c <= i; c++)
            printf(" ");
        for(int d = n - 1; d >= i; d--) 
            printf("*");
        printf("\n");
    }

    return 0;
}