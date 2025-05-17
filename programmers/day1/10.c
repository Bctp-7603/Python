#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1001 * sizeof(char)) ;
    answer[0] = '\0';

    strcat(answer, my_string);

    int len_my = strlen(my_string);
    int len_overwrite = strlen(overwrite_string);
    int len = strlen(my_string) - strlen(overwrite_string);

    int a = 0;

    for(int i = 0; i < len_overwrite; i++) {
        answer[s] = overwrite_string[a];
        a++;
        s++;
    }
    
    return answer;
}

int main() {
    char my[1001], overwrite[1001];
    int s;
    scanf("%s %s %d", my, overwrite, &s);
    printf("%s\n", solution(my, overwrite, s));
    
    return 0;
}