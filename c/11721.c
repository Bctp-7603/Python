#include <stdio.h>

int main() {
    char s;
    int count = 0;
    while(scanf("%c", &s) == 1) {
        printf("%c", s);
        count ++;
        if(count % 10 == 0) printf("\n");
    }

    return 0;
}