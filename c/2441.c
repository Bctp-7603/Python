#include <stdio.h>

int main() {
    int n, count, k = 0;
    scanf("%d", &n);
    count = n;

    for(int i = 1; i <= count; i++) {
        if(i > 1){
            for(int r = 0; r <= k; r++) printf(" ");
            k++;
        }

        for(int j = n; j > 0; j--) {
            printf("*");
        }
        n--;
        printf("\n");
    }
}