// merge sort, heap sort, quick sort 등이나 내장 정렬 함수 등도 전부 사용할 수 없음.
/*
메모리 초과
참고 : https://www.acmicpc.net/board/view/152450
*/

#include <stdio.h>

int main() {
    int count;

    scanf("%d", &count);

    int num[10001];

    for(int i = 0; i < 10001; i++) {
        num[i] = 0;
    }

    for(int i = 0; i < count; i++) {
        int input;
        scanf("%d", &input);
        num[input]++;
    }

    for(int i = 0; i < 10001; i++) {
        for(int j = 0; j < num[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}