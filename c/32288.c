#include <stdio.h>
#include <string.h>

int main() {
    int n;

    scanf("%d", &n);

    char name[n];

    scanf("%s", name);

    for(int i = 0; i < n; i++) {
        if(name[i] == 'I') name[i] += 32;
        if(name[i] == 'l') name[i] -= 32;
    }

    printf("%s\n", name);

    return 0;
}