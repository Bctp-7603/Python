#include <stdio.h>

int main() {
    int n, count;
    scanf("%d", &n);

    count = n;

    for(int i = 1; i <= count; i++) {
        for(int j = n; j > 0; j--) {
            printf("*");
        }
        n--;
        printf("\n");
    }

    return 0;
}