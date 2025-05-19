// 구조체 배열

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
} Member;

int compare(const void* arg1, const void* arg2) {
	int a = *(int*)arg1;    //void를 int형으로 변환
	int b = *(int*)arg2;
	//오름차순 정렬
	if (a > b) return 1;
	else if (a < b) return -1;
	else return 0;
}

int main() {
    int count = 0;

    scanf("%d", &count);

    Member m[count];

    for(int i = 0; i < count; i++) {
        scanf("%d %s", &m[i].age, m[i].name);
        if(m[i].age < 1 || m[i].age > 200) return 0;
    }

    qsort((Member *)m, count, sizeof(Member), compare);

    for(int i = 0; i < count; i++) {
        printf("%d %s\n", m[i].age, m[i].name);
    }

    return 0;
}