#include <stdio.h>

int main() {
    long long a, b, res = 0;

    scanf("%lld %lld", &a, &b);

    /*
    if(a > b && a > 0)
        res = a - b;
    else if(a > b && a < 0)
        res = (b - a);
    else if(b > a && b > 0)
        res = b - a;
    else if(b > a && b < 0)
        res = a - b;
    */

    res = a - b;
    
    if(res < 0)
        res *= -1;

    printf("%lld\n", res);

    return 0;
}