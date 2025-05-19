// https://velog.io/@gogori6565/BOJ-cin.tieNULL%EA%B3%BC-iosbasesyncwithstdiofalse

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL); // 입출력 묶임 끊음 -> 입력을 모두 받은 후 출력
    ios_base::sync_with_stdio(false); // c와 c++ 표준 스트림 동기화 해제 즉 scanf 등을 사용하지 못함.

    int t, num1, num2;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> num1 >> num2;
        cout << num1 + num2 << "\n";
    }

    return 0;
}