#include <bits/stdc++.h>

using namespace std;

int main(){
	string a, b;
	while (cin >> a >> b){
		int counter[26] = {0};
		int alpha[26] = {0};
		int beta[26] = {0};
		for (int i = 0; i < a.length(); i++){
			alpha[a[i] - 'a'] += 1;
		}
		for (int i = 0; i < b.length(); i++){
			beta[b[i] - 'a'] += 1;
		}
		for (int i = 0; i < 26; i++){
			int tmp = min(alpha[i], beta[i]);
			while (tmp--){
				cout << (char)(97 + i);
			}
		}
		cout << endl;
	}
	return 0;
}