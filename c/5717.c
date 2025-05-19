#include <stdio.h>

int main() {
    int m, f;

    while(scanf("%d %d", &m, &f), !(m == 0 && f == 0)) {
        int sum = m + f;
        printf("%d\n", sum);
    }

    /*
    이렇게 해줘도 됨.
    while(1) {
        scanf("%d %d", &m, &f);
        if(m == 0 && f == 0) break;
        int sum = m + f;
        printf("%d\n", sum);
    }
    */

    return 0;
}