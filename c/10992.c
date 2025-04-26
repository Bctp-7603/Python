// 중간줄 출력하는 알고리즘 다시 공부하기

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < (n - i - 1); j++) {
            printf(" ");
        }
        printf("*");
        if(i != 0) {
            for(int j = 0; j < 2 * i - 1; j++)
                printf(" ");
            printf("*");
        }

        printf("\n");
    }

    for(int i = 1; i <= (2 * n - 1); i++)
        printf("*");

    printf("\n");

    return 0;
}