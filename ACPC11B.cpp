#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, a, b, min, key;
	int A[1000], B[1000];
	cin >> t;
	while(t--){
		min = 2000000;
		cin >> a;
		for (int i = 0; i < a; i++){
			cin >> A[i];
		}
		cin >> b;
		for (int i = 0; i < b; i++){
			cin >> B[i];
		}
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				key = abs(A[i] - B[j]);
				if (key < min)
					min = key;
			}
		}
		cout << min << endl;
	} 
	return 0;
}