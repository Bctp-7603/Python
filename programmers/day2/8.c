#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(n % 2 == 0) {
        for(int i = n; i > 0; i--) {
            if(i % 2 == 0) {
                answer += pow(i, 2);
            }
            else continue;
        }
    }
    else {
        for(int i = n; i > 0; i--) {
            if(i % 2 == 1) answer += i;
            else continue;
        }
    }

    return answer;
}