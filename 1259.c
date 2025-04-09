#include <stdio.h>
#include <string.h>

#define MAX 99999

int main() {
    char res[MAX][4];
    int count = 0;
    while(1) {
       char s1[MAX], s2[MAX], temp;
       int length = 0;
       int cmp = 0;

       scanf("%s", s1);
       if(strcmp(s1,"0") == 0) break;
       strcpy(s2, s1);
       length = strlen(s1);

       for(int i = 0; i < length/2; i++) {
            temp = s2[i];
            s2[i] = s2[length - i - 1];
            s2[length - i - 1] = temp;
        }
        cmp = strcmp(s1, s2);

        if(cmp == 0) {
            strcpy(res[count], "yes");
        }
        else {
            strcpy(res[count], "no");
        }
        count++;
    }

    for(int i = 0 ; i < count; i++) {
        printf("%s\n", res[i]);
    }

    return 0;
}