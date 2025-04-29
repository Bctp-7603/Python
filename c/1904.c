#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int num[N];
    num[0] = 1;
    if(N > 1) {
        num[1] = 2;
        for(int i = 2; i < N; i++) {
            num[i] = (num[i - 1] + num[i - 2]) % 15746;
        }
    }

    printf("%d\n", num[N - 1]);

    return 0;
}