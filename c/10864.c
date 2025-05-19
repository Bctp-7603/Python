#include <stdio.h>

int main() {
    int n, m;
    int arr[1001];
    int x = n;

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    while(m--) {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a]++;
        arr[b]++;
    }

    for(int i = 1; i <= n; i++) 
        printf("%d\n", arr[i]);
    
    return 0;
}