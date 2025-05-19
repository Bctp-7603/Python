// math.h 라이브러리 추가하고 컴파일 할 때 undefined 뜸.
// 이럴 경우 마지막에 -lm 붙여서 컴파일하면 됨.
// 틀림;;

#include <stdio.h>
#include <math.h>

int main() {
    int count, max = -1, min = 100;
    int min_c = 0, max_c = 0, sum = 0;

    scanf("%d", &count);

    int num[count];

    for(int i = 0; i < count; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < count; i++) {
        if(num[i] > max) max = num[i];
        if(num[i] < min) min = num[i];
    }

    for(int i = 0; i < count; i++) {
        if(num[i] == min) {
            num[i] = 0;
            min_c++;
        }
        if(num[i] == max) {
            num[i] = 0;
            max_c++;
        }
    }

    for(int i = 0; i < count; i++) {
        sum += num[i];
    }

    float result = 0;
    float down = count - (min_c + max_c);

    result = ceil(sum / down);

    printf("%.0f\n", result);

    return 0;
}