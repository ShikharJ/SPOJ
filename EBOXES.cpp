#include <bits/stdc++.h>

using namespace std;

int main(){
	int test;
	cin >> test;
	while (test--){
		long long N, K, T, F, result;
		cin >> N >> K >> T >> F;
		result = (((F - N) * K) / (K - 1)) + N;
		cout << result << endl;
	}
	return 0;
}