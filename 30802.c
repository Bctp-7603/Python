#include <stdio.h>
#include <math.h>

int main() {
    int people, size[6], count_T, count_P;
    int order_T = 0, orderBundle_P = 0, orderEach_P = 0;

    scanf("%d", &people);

    if(people < 1 || people > pow(10,9))
        return 0;

    for(int i = 0; i < 6; i++) {
        scanf("%d", &size[i]);
    }

    scanf("%d %d", &count_T, &count_P);

    if(count_T < 2 || count_T > pow(10,9) || count_P < 2 || count_P > pow(10,9))
        return 0;

    // 최종 계산
    for(int i = 0; i < 6; i++) {
        if(size[i] <= count_T && size[i] != 0) 
            order_T ++;
        else if(size[i] > count_T) {
            if(size[i] % count_T == 0)
                order_T += (size[i] / count_T);
            else
                order_T += ((size[i] / count_T) + 1);
        }
        orderBundle_P += size[i];
    }

    orderEach_P = orderBundle_P % count_P;
    orderBundle_P = orderBundle_P / count_P;

    printf("%d\n%d %d\n", order_T, orderBundle_P, orderEach_P);

    return 0;
}