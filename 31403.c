// itoa() 는 표준 함수가 아님. <stdlib.h>에 정의가 안되어 있을 수 있음.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

void itoa(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
 }

int main() {
    int a, b, c;
    char A[5], B[5], C[5];

    scanf("%d", &a);
    while(1) {
        if(a >= 1 && a <= 1000) {
            break;
        }
        else return 0;
    }
    scanf("%d", &b);
    while(1) {
        if(a >= 1 && a <= 1000) {
            break;
        }
        else return 0;
    }
    scanf("%d", &c);
    while(1) {
        if(a >= 1 && a <= 1000) {
            break;
        }
        else return 0;
    }

    itoa(a, A);
    itoa(b, B);
    itoa(c, C);

    printf("%d\n", a+b-c);
    strcat(A,B);
    printf("%d\n", atoi(A)-atoi(C));

    return 0;
}