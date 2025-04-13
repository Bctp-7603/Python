#include <stdio.h>

int main() {
    int n, m, num[100], sum, max = 0;

    scanf("%d %d", &n, &m);

    /*
    if(n < 3 && n > 100) return 0;
    if(m < 10 && m > 300000) return 0;
    */

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = num[i] + num[j] + num[k];
                if(sum <= m && sum > max)
                    max = sum;
            }
        }
    }

    printf("%d\n", max);

    return 0;
}