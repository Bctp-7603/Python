#include <stdio.h>

int main() {
    int red, green, blue, result;

    scanf("%d %d %d", &red, &green, &blue);

    red *= 3;
    green *=4;
    blue *=5;

    result = red + green + blue;

    printf("%d\n", result);

    return 0;
}