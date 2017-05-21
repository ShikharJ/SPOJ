#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, h, q, t, count;
	string s;
	cin >> n;
	h = q = t = 0;
	count = 1;
	while (n--){
		cin >> s;
		if (s[0] == '3')
			t++;
		else if (s[2] == '4')
			q++;
		else
			h++;
	}
	count += t;
	q -= t;
	if (q > 0){
		if (h % 2 == 0){
			count += h / 2;
			if (q % 4 == 0)
				count += q / 4;
			else
				count += (q + 4) / 4;
		} else{
			count += (h + 1) / 2;
			q -= 2;
			if (q > 0){
				if (q % 4 == 0)
					count += q / 4;
				else
					count += (q + 4) / 4;
			}
		}
	} else{
		if (h % 2 == 0)
			count += h / 2;
		else
			count += (h + 1) / 2;
	}
	cout << count << endl;
	return 0;
}