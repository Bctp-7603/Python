#include <stdio.h>

int main() {
    int a, b, b_1, b_2, b_3;
    a = b = 0;
    int r1, r2, r3;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a >= 100 && a <= 999 && b >= 100 && b <= 999) {
        b_1 = b % 10;
        b = b - b_1;
        b_2 = (b / 10) % 10;
        b = b - (b_2 * 10);
        b_3 = b / 100;

        r1 = a * b_1;
        r2 = a * b_2;
        r3 = a * b_3;
    
        printf("%d\n", r1);
        printf("%d\n", r2);
        printf("%d\n", r3);
        printf("%d\n", r1 + (r2 * 10) + (r3 * 100));
    }

    return 0;
}