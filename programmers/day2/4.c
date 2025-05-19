// sprintf 사용법 익히기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;

    char ab[20];

    sprintf(ab, "%d%d", a, b);

    int ans1 = atoi(ab);
    int ans2 = 2 * a * b;

    answer = ans1 >= ans2 ? ans1 : ans2;

    return answer;
}