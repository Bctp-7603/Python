#include <stdio.h>

int main() {
    int x, y;
    int day = 0;
    int maxday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d %d", &x, &y);

    for(int i = 0; i < x - 1; i++) {
        day += maxday[i];
    }

    day += y;
    day = day % 7;

    switch (day)
    {
    case 0:
        printf("SUN\n");
        break;
    case 1:
        printf("MON\n");
        break;
    case 2:
        printf("TUE\n");
        break;
    case 3:
        printf("WED\n");
        break;
    case 4:
        printf("THU\n");
        break;
    case 5:
        printf("FRI\n");
        break;
    case 6:
        printf("SAT\n");
    default:
        break;
    }

    /*
    if(mon == 1) {
        if(day == 1 || day == 8 || day == 15 ||
            day == 22 || day == 29) {
                printf("%s\n", date[0]);
        }
        else if(day == 2 || day == 9 || day == 16 ||
            day == 23 || day == 30) {
                printf("%s\n", date[1]);
        }
        else if(day == 3 || day == 10 || day == 17 ||
            day == 24 || day == 31) {
                printf("%s\n", date[2]);
        }
        else if(day == 4 || day == 11 || day == 18 ||
            day == 25) {
                printf("%s\n", date[3]);
        }
        else if(day == 5 || day == 12 || day == 19 ||
            day == 26) {
                printf("%s\n", date[4]);
        }
        else if(day == 6 || day == 13 || day == 20 ||
            day == 27) {
                printf("%s\n", date[5]);
        }
        else if(day == 7 || day == 14 || day == 21 ||
            day == 28) {
                printf("%s\n", date[6]);
        }
    }
    */

    return 0;
}