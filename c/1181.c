// 포인터 사용.

#include <stdio.h>
#include <string.h>

int main() {
    int count;

    scanf("%d", &count);

    char word[count][51];
    int len[count];

    if(count >= 1 && count <= 20000) {
        for(int i = 0; i < count; i++) {
            scanf("%s", word[i]);
            len[i] = strlen(word[i]);
        }

        for(int i = 0; i < count; i++) {
            for(int j = 0; j < 51; j++) {
                if(word[i][j] >= 'A' && word[i][j] <= 'Z') word[i][j] += 32;
            }
        }
    }
    else return 0;

    for(int i = 0; i < count; i++) {
        for(int j = 0; j < count; j++) {
            if(strcmp(word[i], word[j]) == 0) {
                word[j][51] = 0;
                count--;
            }
        }
    }

    for(int i = 0; i < count; i++) {
        printf("%s\n", word[i]);
    }


    return 0;
}