#include <bits/stdc++.h>

using namespace std;

bool val(pair<int, int> a, pair<int, int> b){
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main(){
	int t;
	vector<pair<int, int>> v;
	cin >> t;
	while (t--){
		v.clear();
		int n, end = -1, count = 0;
		cin >> n;
		v.resize(n);
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			v[i].first = tmp;
			cin >> tmp;
			v[i].second = tmp;
		}
		sort(v.begin(), v.end(), [](auto &left, auto &right) {
																if (left.second == right.second)
																	return left.first < right.first;
																return left.second < right.second;});
		for (int i = 0; i < n; i++){
			if (v[i].first >= end){
				count += 1;
				end = v[i].second;
			}
		}
		cout << count << endl;
	}
	return 0;
}