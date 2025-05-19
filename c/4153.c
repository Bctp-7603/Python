#include <stdio.h>

#define MAX 100000

int main() {
    int a, b, c, result[MAX];
    int max = -1, count = 0;

    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0 && b == 0 && c == 0) break;
        else if(a <= 0 && a >= 30000 && b <= 0 && b >= 30000 && c <= 0 && c >= 30000 ) return 0;
        
        if(a >= max) max = a;
        if(b >= a) max = b;
        if(c >= max) max = c;

        if(a == max) {
            if((a * a) == (b * b) + (c * c)) result[count] = 1;
            else result[count] = 0;
        }
        else if(b == max) {
            if((b * b) == (a * a)+(c * c)) result[count] = 1;
            else result[count] = 0;
        }
        else if(c == max) {
            if((c * c) == (a * a)+(b * b)) result[count] = 1;
            else result[count] = 0;
        }
        count ++;
    }

    for(int i = 0; i < count; i++) {
        if(result[i] == 1) printf("right\n");
        else printf("wrong\n");
    }

    return 0;
}