/*
1. 주사위 3개 눈 받기
2. 1~6 입력되면 같은수 몇개인지 찾기
3. 
4. 
5. 
*/


#include <stdio.h>

int main() {
    int a, b, c, prize, max;
    prize = max = 0;

    scanf("%d %d %d", &a, &b, &c);

    if(a > max) max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    if(a>=1 && a<=6 && b>=1 && b<=6 && c>=1 && c<=6) {
        if(a == b && b == c && a == c) {
            prize = 10000 + (1000 * max);
        }
        else if(a == b || b == c || a == c) {
            if(a == b || a == c) {
                prize = 1000 + (100 * a);
            }
            else prize = 1000 + (100 * b);
        }
        else {
            prize = max * 100;
        }
    }

    printf("%d\n", prize);

    return 0;
}