#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	if (a == 0)
		return b;
	else
		gcd(b % a, a);
}

int main(){
	long long a, b, c, t, gcdext;
	cin >> t;
	for (int i = 1; i <= t; i++){
		cin >> a >> b >> c;
		gcdext = gcd(abs(a), abs(b));
		if (c % gcdext == 0)
			cout << "Case " << i << ": Yes" << endl;
		else
			cout << "Case " << i << ": No" << endl;
	}
	return 0;
}