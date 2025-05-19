#include <stdio.h>

int calRoom(int h, int w, int p) {
    int roomX, roomY, roomN;
    if(h > p) {
        roomX = p;
        roomY = 1;
    }
    else {
        if(p % h == 0) {
            roomX = h;
            roomY = (p / h);
        }
        else {
            roomX = p % h;
            roomY = (p / h) + 1;
        } // p - (h * (p / h))

        
    }

    roomN = (100 * roomX) + roomY;

    return roomN;
}

int main() {
    int count;
    
    scanf("%d", &count);

    int roomNumber[count];

    for(int i = 0; i < count; i++) {
        int height, width, people;

        scanf("%d %d %d", &height, &width, &people);
        if(height >= 1 && height <= 99 && width >= 1 && width <= 99 && people >= 1 && people <= (height * width))
            roomNumber[i] = calRoom(height, width, people);
        else return 0;
    }

    for(int i = 0; i < count; i++) {
        printf("%d\n", roomNumber[i]);
    }

    return 0;
}