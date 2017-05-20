#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, tmp;
	double result;
	cin >> t;
	while (t--){
		result = 1;
		cin >> n;
		tmp = n;
		while (tmp-- > 1){
			result += (n / (double)tmp);
		}
		cout << fixed << setprecision(2) << result << endl;
	}
	return 0;
}