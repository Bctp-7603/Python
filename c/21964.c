#include <stdio.h>

#define MAX 100000

int main() {
    int count;

    scanf("%d", &count);

    char sen[count];

    while(1) {
        scanf("%s", sen);
        if(strlen(sen) >= 5 && strlen(sen) <= MAX) break;
        else return 0;
    }

    for(int i = count - 5; i < count; i++)
        printf("%c", sen[i]);
    
    printf("\n");

    return 0;
}