#include <bits/stdc++.h>

using namespace std;

int main (){
	int s;
	while (cin >> s){
		if (s == 0)
			break;
		int t, p = 0;
		bool flag = false;
		vector<int> v;
		for (int i = 0; i < s; ++i){
			cin >> t;
			v.push_back(t);
		}
		sort(v.begin(), v.end());
		for (int i = 1; i < s; ++i){
			if (v[i] - v[i - 1] > 200){
				cout << "IMPOSSIBLE" << endl;
				flag = true;
				break;
			}
			if(i == s - 1){
				p = 1422 - v[s - 1];
			}
		}
		if(!flag){
			if(2 * p > 200){
				cout << "IMPOSSIBLE" << endl;
			}
			else{
				cout << "POSSIBLE" << endl;
			}
		}
	}
}