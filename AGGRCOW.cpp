#include <bits/stdc++.h>

using namespace std;

inline bool find(const vector<int> &v, const size_t &mid, const size_t &c){
	size_t total = 0, i = 0, j = 0, n;
	n = v.size();
	while (i < n){
		total++;
		while (i < n && v[i] - v[j] < mid){
			i++;
		}
		j = i;
	}
	return (total >= c);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	size_t t, n, c;
	vector<int> v;
	cin >> t;
	while (t--){
		v.clear();
		cin >> n >> c;
		v.resize(n);
		for (size_t i = 0; i < n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		size_t l = 0, r = 1000000000, mid;
		while (l < r){
			mid = (l + r + 1) / 2;
			if (find(v, mid, c))
				l = mid;
			else
				r = mid - 1;
		}
		cout << l << endl;
	}
	return 0;
}