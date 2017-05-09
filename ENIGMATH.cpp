#include <bits/stdc++.h>

using namespace std;

static long long gcd(long long a, long long b){
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(){
	int n;
	long long a, b, divisor;
	cin >> n;
	while (n--){
		cin >> a >> b;
		divisor = gcd (a, b);
		a /= divisor;
		b /= divisor;
		cout << b << ' ' << a << endl;
	}
	return 0;
}