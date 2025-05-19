// 반복문으로 코드를 짤 시 시간초과 뜨기에 퀵 소트와 이진 탐색을 사용함.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* arg1, const void* arg2) {
	int a = *(int*)arg1;    //void를 int형으로 변환
	int b = *(int*)arg2;
	//오름차순 정렬
	if (a > b) return 1;
	else if (a < b) return -1;
	else return 0;
}

int main() {
    int count_n, count_m, result;
    int first, end, mid; // 이진 탐색을 위한 변수

    scanf("%d", &count_n);

    int* n = (int*)malloc(sizeof(int) * count_n);

    for(int i = 0; i < count_n; i++) {
        scanf("%d", &n[i]);
        if(n[i] < pow(-2, 31) && n[i] > pow(2, 31)) return 0;
    }

    scanf("%d", &count_m);

    int* m = (int*)malloc(sizeof(int) * count_m);

    for(int i = 0; i < count_m; i++) {
        scanf("%d", &m[i]);
        if(m[i] < pow(-2, 31) && m[i] > pow(2, 31)) return 0;
    }

    // 이진 탐색을 위한 정렬
    qsort(n, count_n, sizeof(int), compare);

    // 이진 탐색
    for(int i = 0; i < count_m; i++) {
        first = 0; end = count_n - 1, result = 0;

        while(first <= end) {
            mid = (first + end) / 2; // 중간 값 지정

            if(m[i] == n[mid]) {
                result = 1;
                break;
            }
            else if(m[i] < n[mid]) end = mid - 1;
            else if(m[i] > n[mid]) first = mid + 1;
        }
        if(result) printf("1\n");
        else printf("0\n");
    }

    free(n);
    free(m);

    return 0;
}