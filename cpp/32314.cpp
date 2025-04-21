#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int a_t; // ampere for the Christmas tree
    int w, v, a; // watt , volt, ampere / ampere = watt / volt 

    cin >> a_t;

    if(a_t < 1 || a_t > 20)
        return 0;

    cin >> w >> v;

    if(w < 1 || w > 2000 || v < 1 || v > 100)
        return 0;

    a = w / v;

    if(a >= a_t)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}