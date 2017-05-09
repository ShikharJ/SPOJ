#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	while (1){
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;
		int A[11], B[11];
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			A[i] = tmp;
		}
		for (int i = 0; i < m; i++){
			int tmp;
			cin >> tmp;
			B[i] = tmp;
		}
		sort(A, A + n);
		sort(B, B + m);
		if (A[0] >= B[1])
			cout << "N" << endl;
		else
			cout << "Y" << endl;
	}
	return 0;
}