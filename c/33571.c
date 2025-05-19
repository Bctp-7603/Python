#include <stdio.h>
#include <string.h>

int main() {
    char sen[1001];
    int count = 0, len;

    fgets(sen, sizeof(sen), stdin);

    //sen[strlen(sen) - 1] = '\0';
    sen[strcspn(sen, "\n")] = '\0';
    
    len = strlen(sen);

    if(sen[0] == ' ' || sen[len - 1] == ' ')
        return 0;

    if(len < 1 || len > 1000)
        return 0;

    for(int i = 0; i < len; i++) {
        if(sen[i] == 'A' || sen[i] == 'a' || sen[i] == 'b' || sen[i] == 'D' || sen[i] == 'd' || sen[i] == 'e' || sen[i] == 'g' || sen[i] == 'O' || sen[i] == 'o' || sen[i] == 'P' || sen[i] == 'p' || sen[i] == 'Q' || sen[i] == 'q' || sen[i] == 'R' || sen[i] == '@') 
            count++;
        else if(sen[i] == 'B')
            count = count + 2;
    }

    printf("%d\n", count);

    return 0;
}