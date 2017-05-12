#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, sum;
	cin >> n;
	while (n != 0){
		s = 5;
		if(n >= 2){
			for (int i = 0; i < n - 1; i++){
				s = s + (7 + (3 * i));
			}
		}
		cout << s << endl;
		cin >> n;
	}
	return 0;
}