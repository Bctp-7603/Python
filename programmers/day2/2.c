// main은 안짜도 됨. 함수만 마저 짜면 완성임 .. 근데 main도 궁금해..

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(arr_len + 1);

    for(int i = 0; i < arr_len; i++) {
        answer[i] = *arr[i];
    }

    answer[arr_len] = '\0';

    return answer;
}

int main() {
    char arr[201];
    int i = 0, size = 0;

    while(true) {
        char ch;
        scanf("%c", &ch);
        if(ch == ']') break;
        if(ch == '\n') continue;
        
        arr[i++] = ch;
        size++;
    }

    printf("%s\n", solution(arr, size));

    return 0;
}