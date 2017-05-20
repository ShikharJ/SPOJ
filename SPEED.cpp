#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if (a == 0)
		return b;
	else
		return gcd(b % a, a);
}

int main(){
	int t, a, b, relative, gcdext;
	cin >> t;
	while (t--){
		cin >> a >> b;
		if ((a > 0 and b > 0) or (a < 0 and b < 0)){
			relative = abs(a - b);
		} else{
			relative = abs(a) + abs(b);
		}
		gcdext = gcd(abs(a), abs(b));
		cout << relative / gcdext << endl;
	}
	return 0;
}