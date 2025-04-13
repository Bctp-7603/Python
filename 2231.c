// 생산자 구하는 알고리즘 다시 공부하기.

#include <stdio.h>

int main() {
    int number, number2, sum, temp;
    int result = 0;

    scanf("%d", &number);

    if(number < 1 || number > 1000000) return 0;

    for(int i = 1; i < number; i++) {
        number2 = i, sum = i;
        while (number2 != 0) {
            temp = number2 % 10;
            sum += temp;
            number2 /= 10;
        }
        if (number == sum) {
            printf("%d\n", i);
            return 0;
            /*
            result = i;
            break;
            */
        }
    }

    // printf("%d\n", result);
    printf("0\n");

    return 0;
}