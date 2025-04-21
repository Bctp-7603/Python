#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c;
    int prize = 0, max = 0;

    cin >> a >> b >> c;

    if(a > max) max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    if(a>=1 && a<=6 && b>=1 && b<=6 && c>=1 && c<=6) {
        if(a == b && b == c && a == c) {
            prize = 10000 + (1000 * max);
        }
        else if(a == b || b == c || a == c) {
            if(a == b || a == c) {
                prize = 1000 + (100 * a);
            }
            else prize = 1000 + (100 * b);
        }
        else {
            prize = max * 100;
        }
    }

    cout << prize << endl;

    return 0;
}