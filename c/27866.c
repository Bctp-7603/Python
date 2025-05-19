#include <stdio.h>

int main() {
    char s[1000];
    int count = 0;

    scanf("%s", s);
    scanf("%d", &count);

    printf("%c\n", s[count-1]);

    return 0;
}