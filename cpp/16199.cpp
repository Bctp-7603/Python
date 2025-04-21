#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int birth_y, birth_m, birth_d;
    int year, month, day;
    int a, b, c; // 만 나이, 세는 나이, 연 나이

    cin >> birth_y >> birth_m >> birth_d;
    cin >> year >> month >> day;

    if(birth_y < year && month > birth_m)
        a = year - birth_y;
    else if(birth_y < year && month  == birth_m && day >= birth_d)
        a = year - birth_y;
    else if(birth_y == year && birth_d <= day)
        a = year - birth_y;
    else
        a = year - birth_y - 1;

    b = year - birth_y + 1;

    c = year - birth_y;

    cout << a << endl << b << endl << c << endl;

    return 0;
}