// stack 구현
// #define true 1 , #define false 0

#include <stdio.h>
#define MAX_SIZE 100000

int num[MAX_SIZE];
int top = -1;
int result = 0;

int isEmpty() {
    if(top < 0) return 1;
    else return 0;
}

int isFull() {
    if(top >= MAX_SIZE-1) return 1;
    else return 0;
}

void push(int value) {
    // if(isFull() == 1) printf("스태이 가득 찼습니다.\n");
    if(isFull() == 1) return;
    else num[++top] = value;
}

void pop() {
    // if(isEmpty() == 1) printf("스택이 비었습니다.\n");
    if(isEmpty() == 1) return;
    else num[top--] = 0;
}


int sum(int count) {
    for(int i = 0; i < count; i++) {
        result += num[i];
    }
}

int main() {
    int count, data;

    scanf("%d", &count);

    for(int i = 0; i < count; i++) {
        scanf("%d", &data);
        if(data == 0) pop();
        else push(data);
    }
    
    sum(count);

    printf("%d\n", result);

    return 0;
}