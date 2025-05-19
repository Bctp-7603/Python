#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int a = 1; a <= i; a++) {
            printf("*");
        }
        for(int b = 1; b <= (n - i); b++)
            printf(" ");
        for(int c = 1; c <= (n - i); c++)
            printf(" ");
        for(int d = 1; d <= i; d++) {
            printf("*");
        }   
        printf("\n");
    }

    for(int i = 1; i <= n; i++) {
        for(int e = (n - 1); e >= i; e--){
            printf("*"); 
        }
        for(int f = 1; f <= i; f++)
            printf(" ");
        for(int g = 1; g <= i; g++)
            printf(" ");
        for(int h = (n - 1); h >= i; h--){
            printf("*"); 
        }
        printf("\n");
    }

    return 0;
}