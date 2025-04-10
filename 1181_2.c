#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 51

typedef struct struct_word {
    char input[MAX];
    int len;
} WORD;

int main() {
    int count = 0;

    scanf("%d", &count);
    WORD s[] = (WORD*)malloc(sizeof(WORD) * count);

}