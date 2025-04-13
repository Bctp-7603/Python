// 소수 구하기
/*
약수를 구하면서 count++를 하고 count가 2개 이하인거면 소수?

for(int i = 0; i < n; i++) {
    if(n % i == 0) count++;
}

if(count <= 2) result


*/

#include <stdio.h>

int main() {
    int count;
    int result = 0;

    scanf("%d", &count);

    int arr[count];

    for(int i = 0; i < count; i++) {
        scanf("%d", &arr[i]);
    }

    // 소수 구하다 침대에서 뒹굴뒹굴 거리기

    printf("%d\n", result);

    return 0;
}