#include <stdio.h>
#include <string.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    int len = strlen(s1);
    
    for(int i = 0; i < len; i++) {
        if(s1[i] >= 65 && s1[i] <= 90) 
            s1[i] += 32;
        else if(s1[i] >= 97 && s1[i] <= 122)
            s1[i] -= 32;
        else continue;
    }

    printf("%s\n", s1);
    
    return 0;
}
