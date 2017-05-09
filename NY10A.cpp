#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while (n--){
		int a;
		int A[8] = {};
		cin >> a;
		string str;
		cin >> str;
		cout << a << ' ';
		for (int i = 0; i < 38; i++){
			if (str[i] == 'T' && str[i + 1] == 'T' && str[i + 2] == 'T')
				A[0] += 1;
			else if (str[i] == 'T' && str[i + 1] == 'T' && str[i + 2] == 'H')
				A[1] += 1;
			else if (str[i] == 'T' && str[i + 1] == 'H' && str[i + 2] == 'T')
				A[2] += 1;
			else if (str[i] == 'T' && str[i + 1] == 'H' && str[i + 2] == 'H')
				A[3] += 1;
			else if (str[i] == 'H' && str[i + 1] == 'T' && str[i + 2] == 'T')
				A[4] += 1;
			else if (str[i] == 'H' && str[i + 1] == 'T' && str[i + 2] == 'H')
				A[5] += 1;
			else if (str[i] == 'H' && str[i + 1] == 'H' && str[i + 2] == 'T')
				A[6] += 1;
			else if (str[i] == 'H' && str[i + 1] == 'H' && str[i + 2] == 'H')
				A[7] += 1;
		}
		cout << A[0] << ' ' << A[1] << ' ' << A[2] << ' ' << A[3] << ' ' << A[4] << ' ' << A[5] << ' ' << A[6] << ' ' << A[7] << endl;
	}
	return 0;
}