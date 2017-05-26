#include <bits/stdc++.h>

using namespace std;

int value(string s){
	int result = 0;
	for (int i = 0; i < s.length(); i++){
		if (s[i] <= '9'){
			if (s[i + 1] == 'i')
				result += int(s[i] - 48);
			else if (s[i + 1] == 'x')
				result += 10 * int(s[i] - 48);
			else if (s[i + 1] == 'c')
				result += 100 * int(s[i] - 48);
			else
				result += 1000 * int(s[i] - 48);
			i++;
		}
		else
			if (s[i] == 'i')
				result += 1;
			else if (s[i] == 'x')
				result += 10;
			else if (s[i] == 'c')
				result += 100;
			else
				result += 1000;
	}
	return result;
}

string stringer(int x)
{
	string result = "";
	if (x >= 2000)
		result = result + char(x / 1000 + 48) + 'm';
	else if (x >= 1000)
		result = result + 'm';
	x %= 1000;
	if (x >= 200)
		result = result + char(x / 100 + 48) + 'c';
	else if (x >= 100)
		result = result + 'c';
	x %= 100;
	if (x >= 20)
		result = result + char(x / 10 + 48) + 'x';
	else if (x >= 10)
		result = result + 'x';
	x %= 10;
	if (x >= 2)
		result = result + char(x + 48) + 'i';
	else if (x >= 1)
		result = result + 'i';
	return result;
}

int main(){
	int n, i;
	string s1, s2;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> s1 >> s2;
		cout << stringer(value(s1) + value(s2)) << endl;
	}
	return 0;
}