#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin >> n;
	cin >> a;
	n -= 1;
	while (n--){
		cin >> b;
		a ^= b;
	}
	cout << a << endl;
	return 0;
}