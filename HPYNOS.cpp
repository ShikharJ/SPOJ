#include <bits/stdc++.h>

using namespace std;

int main(){
	long n, result;
	long A[10000];
	int i = 0;
	cin >> n;
	while (1){
		result = 0;
		A[i] = n;
		i++;
		string s = to_string(n);
		for (int j = 0; j < s.length(); j++){
			int m = s[j] - '0';
			result += m * m;
		}
		if (result == 1){
			cout << i;
			return(0);
		}
		for (int k = 0; k < i; k++){
			if (result == A[k]){
				cout << -1 << endl;
				return(0);
			}
		}
		n = result;
	}
	return 0;
}