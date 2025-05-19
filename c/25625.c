#include <stdio.h>

int main() {
    int x, y; // x : 버스 이동 시간, y : 2공학관 도착 시간
    int time = 0; // time : 최소 시간

    scanf("%d %d", &x, &y);

    if(x > y) 
        time = x + y;

    else if (x <= y) 
        time = y - x;

    printf("%d\n", time);
    
    return 0;
}