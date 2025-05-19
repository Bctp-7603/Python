// 레전드 8000칸까리 배열 만들어서 방 하나씩 다 주기
// 두번째 최빈값 출력하는거임.

/*
temp에 저장하고 그 다음 수를 비교해서 맞으면 체크가 올라감.
선언된 max가 계속 최신화됨. => 2번재는 어케 찾음?
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2) {
	int a = *(int*)arg1;
	int b = *(int*)arg2;
	if (a > b) return 1;
	else if (a < b) return -1;
	else return 0;
}

int main() {
    int count;
    int num[500000];
    int sum = 0, range;

    scanf("%d", &count);

    int temp;

    if(count < 1 || count > 500000) return 0;

    for(int i = 0; i < count; i++) {
        scanf("%d", &num[i]);
        if(num[i] < -4000 || num[i] > 4000) return 0;
        sum += num[i];
    }

    qsort(num, count, sizeof(int), compare);

    if(num[0] < 0 && num[count - 1] < 0)
        range = (num[0] * -1) - (num[count - 1] * -1);
    else
        range = num[count - 1] - num[0];

    for(int i = 0; i < count; i++) {
        int check = 0;
        // if()
            check ++;
        temp = num[i];
        //max = num[i];
    }

    printf("%.0f\n", round(sum / count)); // 산술평균
    printf("%.0f\n", round(num[count / 2])); // 중앙값
    // 최빈값
    printf("%d\n", range); // 범위

    return 0;
}