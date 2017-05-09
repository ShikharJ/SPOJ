#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, n, m, D, count;
	int A[500];
	cin >> t;
	while (t--){
		count = 0;
		cin >> n >> m >> D;
		for (int i = 0; i < n; i++){
			cin >> A[i];
			while ((A[i] -= D) > 0)
				count++;
		}
		if (count >= m)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}