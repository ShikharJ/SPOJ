#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, a, b;
	char op;
	cin >> n;
	while (n--){
		cin.ignore();
		cin >> a;
		while (1){
			cin >> op;
			if (op == '='){
				cout << a << endl;
				break;
			}
			cin >> b;
			if (op == '+')
				a += b;
			else if (op == '-')
				a -= b;
			else if (op == '*')
				a *= b;
			else
				a /= b;
		}
	}
	return 0;
}