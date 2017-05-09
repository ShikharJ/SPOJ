#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[10], i, k, difference, result;
	for (i = 0; i < 10; i++) 
		cin >> a[i];
	for (i = 1; i < 10; i++) 
		a[i] += a[i - 1];
	difference = 100 - a[0];
	result = a[0];
	for (i = 1; i < 10; i++){
		k = abs(100 - a[i]);
		if (k < difference || (k == difference && a[i] > result)){
			difference = k;
			result = a[i];
		}
	}
	cout << result << endl;
	return 0;
}