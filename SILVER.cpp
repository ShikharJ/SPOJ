#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, i, pow;
	while (1){
		cin >> n;
		if (n == 0)
			break;
		pow = 1;
		for ( i = 0 ; i <= n ; i++ ) {
			if ( pow > n ) {
				cout << i - 1 << endl;
				break;
			}
			pow = pow * 2;
		}
	}
	return 0;
}