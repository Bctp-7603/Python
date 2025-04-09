#include <stdio.h>

int main() {
    int hour, min, runTime;

    scanf("%d %d", &hour, &min);
    scanf("%d", &runTime);

    if(hour >= 0 && hour <= 23 && min >= 0 && min <= 59 && runTime >= 0 && runTime <= 1000) {
        min = min + runTime;
        if(min >= 60) {
            hour = hour + (min/60);
            min = min - 60;
            if(hour >= 24) {
                hour = hour - 24;
            }
            if(min >= 60) {
                min = min - (60 * (min/60));
            }
        }
    }

    printf("%d %d\n", hour, min);
    
    return 0;
}