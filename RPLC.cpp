#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t, n, sum, min;
	cin >> t;
	for (long long i = 1; i <= t; i++){
		sum = 0;
		min = 1000000000;
		cin >> n;
		for (long long j = 0; j < n; j++){
			long long tmp;
			cin >> tmp;
			sum += tmp;
			if (sum < min)
				min = sum;
		}
		if (min <=  0)
			min = abs(min) + 1;
		else
			min = 1;
		cout << "Scenario #" << i << ": " << min << endl; 
	}
	return 0;
}