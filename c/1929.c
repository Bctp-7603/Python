// 에라토스테네스의 체 공부.
/*
소수도 합성수도 아닌 1은 건너뛰고 2를 남겨둔 2의 배수 지우기.
3을 남겨둔 3의 배수 지우기, 4의 배수는 2의 배수임.
5를 남겨둔 5의 배수 지우기, 6의 배수 또한 이미 지움.
7을 남겨둔 7의 배수 지우기, 11을 남겨둔 11의 배수 지우기
13을 남겨둔 13의 배수 지우기.......
num[i]에 숫자들을 쭉 저장해두고 지울 배수들에 0을 채움.
그리고 num[i] 를 돌면서 0을 만나면 continue;해서 건너뛰고
아닌 애들을 출력시키는 알고리즘
*/

#include <stdio.h>
#include <math.h>

#define MAX 1000000

int main() {
    int M, N;
    int num[MAX];

    scanf("%d %d", &M, &N);

    if(M < 1 || M > MAX || N < 1 || N > MAX)
        return 0;

    /*
    for(M; M <= N; M++) {
        if(M >= 2) {
            for(int j = 2; j <= M; j++) {
                if(j == M)
                    printf("%d\n", M);
                if(M % j == 0)
                    break;
            }
        }
    }
    */

    for(int i = 2; i <= N; i++) {
        num[i] = i;
    }

    for(int i = 2; i <= N; i++) {
        if(num[i] == 0) continue;
        for(int j = i + i; j <= N; j += i)
            num[j] = 0;
    }

    for(int i = M; i <= N; i++) {
        if(num[i] != 0)
            printf("%d\n", num[i]);
    }

    return 0;
}