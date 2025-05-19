// a ~ z : 97 ~ 122 -> 대문자 : -32
// 50점임 ... 제발 고쳐주셈 ...

#include <stdio.h>
#include <math.h>

int main() {
    int L = 0, alpha_c = 97;
    long long int sum = 0;
    long long int M = 1234567891;
    char alpha[26];
    char input[51];

    for(int i = 0; i < 26; i++) {
        alpha[i] = alpha_c;
        alpha_c++;
    }

    scanf("%d %s", &L, input);

    int index[L];

    for(int i = 0; i < L; i++) {
        for(int j = 0; j < 26; j++) {
            if(alpha[j] == input[i]) {
                index[i] = j + 1;
            }
        }
    }

    for(int i = 0; i < L; i++) {
        sum += index[i] * pow(31, i);
    }

    printf("%lld\n", sum % M);

    return 0;
}