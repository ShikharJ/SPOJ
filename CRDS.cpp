#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while (n--){
		long long m;
		cin >> m;
		long long result = (m * ((3 * m) + 1))/2;
		result = result % 1000007;
		cout << result << endl;
	}
	return 0;
}