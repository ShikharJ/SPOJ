#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, tmp, count;
	vector<pair<int, int>> v;
	cin >> t;
	while (t--){
		count = 1;
		cin >> n;
		v.clear();
		v.resize(n);
		for (int i = 0; i < n; i++){
			cin >> tmp;
			v[i].first = tmp;
			cin >> tmp;
			v[i].second = tmp;
		}
		sort(v.begin(), v.end(), [](auto &left, auto &right){
			if (left.first == right.first)
				return left.second < right.second;
			return left.first < right.first;
		});
		for (int i = 0; i < n; i++){
			tmp = 1;
			for (int j = 0; j < i; j++){
				if (v[j].second >= v[i].first)
					tmp++;
			}
			if (tmp > count)
				count = tmp;
		}
		cout << count << endl;
	}
	return 0;
}