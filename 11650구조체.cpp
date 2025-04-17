#include <iostream>
#include <algorithm>

using namespace std;

struct cor {
    int x, y;
};

bool compare(cor a, cor b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	else {
		return a.x < b.x;
	}
}

struct cor num[100001];

int main() {
    int count, x, y;

    cin >> count;

    for(int i = 0; i < count; i++) {
        cin >> num[i].x >> num[i].y;
    }

    sort(num, num + count, compare);

    for(int i = 0; i < count; i++) {
        cout << num[i].x << " " << num[i].y << endl;
    }

    return 0;
}