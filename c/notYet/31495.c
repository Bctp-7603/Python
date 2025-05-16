#include <stdio.h>
#include <string.h>

int main() {
    char str[53];
    scanf("%s", str);
    int len = strlen(str);

    if(str[0] == '"' && str[len - 1] == '"') {
        for(int i = 1; i < len - 1; i++) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
    else printf("CE\n");

    return 0;
}