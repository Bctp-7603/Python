#include <stdio.h>

int main() {
    int num1[3], num2[3], sum1 = 0, sum2 = 0;

    for(int i = 0; i < 3; i++) {
        scanf("%d", &num1[i]);
    }

    num1[0] *= 3;
    num1[1] *= 2;

    for(int i = 0; i < 3; i++) {
        scanf("%d", &num2[i]);
    }

    num2[0] *= 3;
    num2[1] *= 2;
    

    for(int i = 0; i < 3; i++) {
        sum1 += num1[i];
    }

    for(int i = 0; i < 3; i++) {
        sum2 += num2[i];
    }

    if(sum1 > sum2) printf("A\n");
    else if(sum1 < sum2) printf("B\n");
    else printf("T\n");

    return 0;
}