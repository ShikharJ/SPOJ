#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	long long result, n;
	cin >> t;
	while (t--){
		result = 0;
		cin >> n;
		if (n < 3)
			cout << 1 << endl;
		else{
			result = ceil(log10(2 * 3.141592653589793 * n) / 2 + n * log10(n / 2.7182818284590452353));
			cout << result;
		}
	}
	return 0;
}