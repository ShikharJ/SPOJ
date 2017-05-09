#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while (1){
		cin >> n;
		if (n == 0)
			break;
		float result = (n * n) / (2.0 * 3.14159265);
		printf("%.2f\n", result);
	}
	return 0;
}