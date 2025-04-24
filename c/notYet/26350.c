#include <stdio.h>
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
    int count;
    int num[10][1000];

    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        for(int j = 0; j < 1000; j++) {
            scanf("%d", &num[i][j]);
            if(num[i][j] == "\n") break;
        }
    }

    for(int i = 0; i < count; i++) {
        qsort(num[count], count, sizeof(int), compare);
    }

    for(int i = 0; i < count; i++) {
        printf("Denominations: ");
        for(int j = 0; j < 1000; j++) {
            printf("%d ", num[i][j]);
            if(num[i][j] * 2 <= num[i][j+1]) {
                num[i][0] = 0;
            }
        }
        printf("\n");
        if(num[i][0] == 0) {
            printf("Good coin denominations!\n");
        }
        else
            printf("Bad coin denominations!\n");
        printf("\n");
    } 
    
    return 0;
}

/*
#include <iostream>
using namespace std;

int T, N;
int arr[10];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 0; i < N; i++) cin >> arr[i];
		bool chk = 1;
		for (int i = 1; i < N; i++) {
			if (arr[i] < arr[i-1] * 2) chk = 0;
		}

		cout << "Denominations: ";
		for (int i = 0; i < N; i++) cout << arr[i] << ' ';
		cout << '\n';
		if (chk) cout << "Good ";
		else cout << "Bad ";
		cout << "coin denominations!\n\n";
	}
}

#include <stdio.h>

int main() {
	int count, N;
    int num[10];

	scanf("%d", &count);
	while (count--) {
		// scanf("%d", &N)
		for (int i = 0; i < count; i++) scanf("%d", &num[i]);
		bool check = 1;
		for (int i = 1; i < N; i++) {
			if (num[i] < num[i-1] * 2) chk = 0;
		}

		printf("Denominations: ");
		for (int i = 0; i < N; i++) printf("%d ", num[i]);
        pirntf('\n');
		if (check) printf("Good ");
		else printf("Bad");
		printf("coin denominations!\n\n");
	}
}
*/