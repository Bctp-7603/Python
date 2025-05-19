// vector 공부하기

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, x, y;
    	vector<pair<int, int>> v; // 이차원 벡터 선언
	cin >> n;

	for (int i = 0; i < n; i++){
    	cin >> x >> y;
    	// 첫 번째 - 이차원 벡터 입력 방법
    	v.push_back({x, y});
        // 두 번째 - 이차원 벡터 입력 방법
        // v.push_back(make_pair(x, y));
    }
    
    sort(v.begin(), v.end()); // 오름차순
    // sort(v.begin(), v.end(), less<int>()); // 오름차순
    
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " "<< v[i].second << "\n";
	}
    
    return 0;
}