#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N;

    cin >> N;

    for(int i = 0; i < N; i++) {
        if(N == 1)
            cout << "LoveisKoreaUniversity" ;
        else if(N < 1 || N > 10)
            return 0;
        else
        cout << "LoveisKoreaUniversity ";
    }

    cout << endl;

    return 0;
}