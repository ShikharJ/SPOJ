#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string s, t;
	cin >> n;
	while (n--){
		cin >> s;
		t = s;
		reverse(s.begin(), s.end());
		if (s.compare(t) != 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;		
	}
	return 0;
}