#include <stdio.h>

int main() {
    char a;

    while(scanf("%c", &a) == 1) {
        printf("%c", a);
    }

    return 0;
}

/*
#include <stdio.h>

int main() {
    char a;

    while(scanf("%c", &a) != EOF) {
        printf("%c", a);
    }

    return 0;
}
*/

/*
int main() {
    char a[101];

    while(gets(a) != NULL) { //gets함수는 char 포인터를 반환, 
        printf("%s\n", a);   //만일 파일의 끝에 도달해 입력을 받지 못했다면 NULL을 반환할 것.
    }

    return 0;
}
*/
/*
int main() {
    char a[101];

    while(scanf("%[^\n]", a) != EOF) {
        printf("%s\n", a);
        getchar(); // %[^\n]을 사용해 \n이 나올 때까지 입력받고 \n을 버퍼에 남겨두었을 것이므로 제거해준다.
    }

    return 0;
}
*/