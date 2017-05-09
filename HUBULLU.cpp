#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a, b; 
	while (n--){
		cin >> a >> b;
		if (b == 0)
			cout << "Airborne wins." << endl;
		else
			cout << "Pagfloyd wins." << endl;
	}
	return 0;
}