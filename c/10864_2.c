#include <stdio.h>

int main() {
    int n, m;
    int rel1[1001], rel2[1001];
    int res[1001];

    scanf("%d %d", &n, &m);

    /*
    int rel1[n], rel2[n];
    int res[n];
    */
    
    for(int i = 0; i < n; i++) {
        res[i] = 0;
    }

    for(int i = 0; i < m; i++) {
        scanf("%d %d", &rel1[i], &rel2[i]);
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 0; j < n; j++) {
            if(rel1[j] == i || rel2[j] == i)
                res[i - 1]++;
        }
    }

    for(int i = 0; i < m; i++) {
        printf("%d\n", res[i]);
    }

    return 0;
}