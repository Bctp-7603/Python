#include <stdio.h>
#include <string.h> // strcat()
#include <ctype.h> // atoi()

int main() {
    int a, b, c;
    char A[5], B[5], C[5];
    
    while(1) {
        if(a >= 1 && a <= 1000) {
            scanf("%d", &a);
            break;
        }
        else return 0;
    }
    while(1) {
        if(a >= 1 && a <= 1000) {
            scanf("%d", &b);
            break;
        }
        else return 0;
    }
    while(1) {
        if(a >= 1 && a <= 1000) {
            scanf("%d", &c);
            break;
        }
        else return 0;
    }

    

    printf("%d\n", a+b-c);
    strcat(A,B);
    printf("%d\n", atoi(A)-atoi(C));

    return 0;
}