#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, x, tmp;
	cin >> n;
	while (n--){
		tmp = 0;
		cin >> x;
		if (x % 2 != 0){
			cout << x << endl;
			continue;
		}
		else{
			while (x != 0){
				tmp = tmp << 1;
				tmp += (x & 1);
				x = x >> 1;
			}
			cout << tmp << endl;
		}
	}
	return 0;
}