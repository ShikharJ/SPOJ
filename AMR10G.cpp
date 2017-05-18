#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, k, A[20000], min;
	cin >> t;
	while (t--){
		min = 1000000000; 
		cin >> n >> k;
		for (int i = 0; i < n; i++){
			cin >> A[i];
		}
		if (k == 1){
			cout << 0 << endl;
			continue;
		}
		sort(A, A + n);
		for (int i = 0; i < n - k + 1; i++){
			if (A[i + k - 1] - A[i] < min)
				min = A[i + k - 1] - A[i];
		}
		cout << min << endl;
	}
	return 0;
}