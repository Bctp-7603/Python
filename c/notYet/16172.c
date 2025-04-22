// https://man-25-1.tistory.com/56 참고해서 다시 풀기

#include <stdio.h>
#include <string.h>

int main() {
    int len1, len2, count = 0;
    char input[200000], search[200000];

    scanf("%s %s", input, search);

    len1 = strlen(input) - 1;
    len2 = strlen(search) - 1;

    // if(strcmp(search[j], input[i]) == 0)
    for(int i = 0; i < len1; i++) {
        for(int j = 0; j < len2; j++) {
            if(search[j] == input[i]){
                count = 1;
                break;
            }
        }
        if(count != 0) break;
    }

    printf("%d\n", count);

    return 0;
}