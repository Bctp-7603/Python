#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main() {
    int a, b;
    // int more, less; 
    int res_a = 0, res_b = 0;

    scanf("%d %d", &a, &b);

    if(a < 1 || a > 10000 || b < 1 || b > 10000) return 0;

    /*
    more = (a > b ? a : b); // 더 큰 값
    less = (a < b ? a : b); // 더 작은 값
    */

    /* 최대공약수 (무차별 대입 ver)
    for(int i = less; i > 0; i--) {
        if(a % i == 0 && b % i == 0) {
            res_a = i;
            break;
        }
        if(res_a != 0) break;
    }
    */

    // 최대공약수 (유클리드 호제법)
    res_a = gcd(a, b);

    /* 최소공배수 (무작위 ver -> 오답) 반례 : 3 8
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++) {
            if(a * i == b * j) {
                res_b = a * i;
                break;
            }
        }
        if(res_b != 0) break;
    }
    */
   
   res_b = (a * b) / res_a;

    printf("%d\n", res_a);
    printf("%d\n", res_b);

    return 0;
}