// https://velog.io/@kimmainsain/C%EC%96%B8%EC%96%B4-%EB%B0%B1%EC%A4%80-1463-1%EB%A1%9C-%EB%A7%8C%EB%93%A4%EA%B8%B0-uh6ciweq
/*
이 방법은 최소 카운팅이 아닌 그냥 계산법임. 
int main() {
    int N, count = 0;
    scanf("%d", &N);

    while(N != 1) {
        if(N % 3 == 0) {
            N /= 3;
            count++;
        }
            
        else if(N % 2 == 0) {
            N /= 2;
            count++;
        }
        else {
            N--;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
*/

#include <stdio.h>

#define min(A,B) A<B?A:B
 
int arr[1000001];

int main() {
    int X;
    scanf("%d", &X);
    for (int i = 2; i <= X; i++) {
        arr[i] = arr[i - 1] + 1;
        if (i % 3 == 0)
            arr[i] = min(arr[i], arr[i / 3] + 1);
        if (i % 2 == 0)
            arr[i] = min(arr[i], arr[i / 2] + 1);
    }
    printf("%d\n", arr[X]);
	return 0;
}