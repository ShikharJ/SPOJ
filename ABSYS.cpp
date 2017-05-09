#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while (n--){
		cin.ignore();
		string a, b, c;
		char d;
		cin >> a;
		cin >> d;
		cin >> b;
		cin >> d;
		cin >> c;
		for (int i = 0; i < a.length(); i++){
			if (isalpha(a[i])){
				int result = stoi(c) - stoi(b);
				cout << result << " + " << b << " = " << c << endl;
				break;
			}
		}
		for (int i = 0; i < b.length(); i++){
			if (isalpha(b[i])){
				int result = stoi(c) - stoi(a);
				cout << a << " + " << result << " = " << c << endl;
				break;
			}
		}
		for (int i = 0; i < c.length(); i++){
			if (isalpha(c[i])){
				int result = stoi(a) + stoi(b);
				cout << a << " + " << b << " = " << result << endl;
				break;
			}
		}
	}	
	return 0;
}