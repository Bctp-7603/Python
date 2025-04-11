#include <stdio.h>

#define MAX 10000

int main() {
    int result = 0;
    int count;
    char info[MAX], compare;


    scanf("%d", &count);

    getchar();
    for(int i = 0; i < count; i++) {
        scanf("%c", &info[i]);
        getchar();
    }

    scanf("%c", &compare);

    for(int i = 0; i < count; i++) {
        if(info[i] == compare)
            result++;
    }

    printf("%d\n", result);

    return 0;
}