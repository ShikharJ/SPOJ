#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b){
	if (a == 0)
		return b;
	else
		gcd(b % a, a);
}

int main(){
	long long n, a, b, gcdext, sum = 0;
	long long A[100000];
	cin >> n;
	cin >> a;
	for (int i = 0; i < n - 1; i++){
		cin >> b;
		A[i] = b - a;
		a = b;
	}
	gcdext = gcd(A[0], A[1]);
	for (int i = 2; i < n - 1; i++){
		gcdext = gcd(gcdext, A[i]);
	}
	for (int i = 0; i < n - 1; i++){
		sum += ((A[i]/gcdext) - 1);
	}
	cout << sum << endl;
	return 0;
}