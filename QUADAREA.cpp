#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double a, b, c, d, s, result;
	cin >> n;
	while (n--){
		cin >> a >> b >> c >> d;
		s = (a + b + c + d) / 2;
		result = (s - a) * (s - b) * (s - c) * (s - d);
		result = sqrt(result);
		cout << fixed << setprecision(2) << result << endl;
	}
	return 0;
}