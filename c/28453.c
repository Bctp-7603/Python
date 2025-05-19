#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int num[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &num[i]);
        if(num[i] == 300)
            num[i] = 1;
        else if(num[i] < 300 && num[i] >= 275)
            num[i] = 2;
        else if(num[i] < 275 && num[i] >= 250)
            num[i] = 3;
        else
            num[i] = 4;
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", num[i]);
    }
    
    printf("\n");

    return 0;
}