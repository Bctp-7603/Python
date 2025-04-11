#include <stdio.h>

int main() {
    int count, num;
    int result = 0;

    scanf("%d", &count);

    int a[count];

    if(count >= 1 && count <= 100) {
        for(int i = 0; i < count; i++) {
            scanf("%d", &a[i]);
        }
    }
    else return 0;

    scanf("%d", &num);

    for(int i = 0; i < count; i++) {
        if(a[i] == num) result++;
    }

    printf("%d\n", result);

    return 0;
}