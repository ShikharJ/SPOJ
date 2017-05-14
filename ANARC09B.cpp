#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	if (a == 0)
		return b;
	else
		gcd(b % a, a);
}

int main(){
	long long w, h, gcdext, n;
	while (1){
		cin >> w >> h;
		if (w == 0 and h == 0)
			break;
		n = w * h;
		gcdext = gcd(w, h);
		n /= gcdext;
		n /= gcdext;
		cout << n << endl;
	}
	return 0;
}