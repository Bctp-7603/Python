#include <stdio.h>

int main() {
    int n, yes = 0, no = 0;
    scanf("%d", &n);

    int pick[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &pick[i]);
        if(pick[i] == 0) no++;
        else if(pick[i] == 1) yes++;
    }

    if(yes > no) printf("Junhee is cute!\n");
    else printf("Junhee is not cute!\n");

    return 0;
}