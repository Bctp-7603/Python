#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len_ans = len1 + len2 + 1;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(len_ans * sizeof(char));

    answer[0] ='\0';

    int j = 0, k = 0;

    for(int i = 0; i < len1; i++) {
        answer[k] = str1[j];
        answer[k + 1] = str2[j];
        k += 2;
        j++;
    }
    answer[k] = '\0';

    return answer;
}

int main() {
    char str1[11], str2[11];
    str1[0] = '\0';
    str2[0] = '\0';

    scanf("%s %s", str1, str2);

    printf("%s\n", solution(str1, str2));
    
    return 0;
}