#include <stdio.h>

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
    if(n < 3 && n > 100) return 0;
    if(m < 10 && m > 300000) return 0;
    
    int num[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    return 0;
}