#include <stdio.h>

int main() {
    int T;

    scanf("%d", &T);

    int num[T], N[T], M[T];

    if(T < 1 || T > 20) return 0;

    for(int i = 0; i < T; i++) {
        scanf("%d %d", &N[i], &M[i]);

        if(N[i] < 27 && N[i] >= 12 && M[i] >= 4 && M[i] < 10) {
            num[i] = 11 * M[i] + 4;
        }
        else num[i] = -1;
    }

    for(int i = 0; i < T; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}