#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	double result;
	for (int i = 1; i <= n; i++){
		cin >> result;
		result *= result;
		result *= 4;
		result += 0.25;
		cout << fixed << setprecision(2) << "Case " << i << ": " << result << endl;
	}
	return 0;
}