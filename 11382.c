#include <stdio.h>
#include <math.h>

int main() {
    long long a, b, c;

    scanf("%lld %lld %lld", &a, &b, &c);

    if(a>=1 && a<=pow(10,12) && b>=1 && b<=pow(10,12) && c>=1 && c<=pow(10,12)) {
        printf("%lld\n", a+b+c);
    }

    return 0;
}