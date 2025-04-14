#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    // a와 b는 char* 타입을 가리키는 포인터이므로 먼저 이를 문자열로 간주
    char *str_a = *(char **)a;
    char *str_b = *(char **)b;

    // 1. 글자 길이를 비교
    int len_a = strlen(str_a);
    int len_b = strlen(str_b);

    if (len_a != len_b) {
        return len_a - len_b;  // 길이가 다르면 길이 순으로 정렬
    }

    // 2. 길이가 같다면 알파벳 순으로 비교
    return strcmp(str_a, str_b);
}

int main() {
    int N;

    scanf("%d", &N);

    char *words[N];

    for(int i = 0; i < N; i++) {
        words[i] = (char *)malloc(sizeof(char) * 51); // 최대 50글자까지 입력 가능
        scanf("%s", words[i]);
    }

    qsort(words, N, sizeof(char *), compare);

    // 이전에 출력한 단어를 저장할 변수
    char *last_printed = NULL;

    for (int i = 0; i < N; i++) {
        if (last_printed == NULL || strcmp(words[i], last_printed) != 0) {
            // 중복된 단어가 아니라면 출력
            printf("%s\n", words[i]);
            last_printed = words[i];  // 마지막으로 출력한 단어를 저장
        }
    }

    for (int i = 0; i < N; i++) {
        free(words[i]);
    }

    return 0;
}

// 알고리즘 다시 공부 필수!