#include <bits/stdc++.h>

using namespace std;

long long poly[1000], n;
long long x[100], k;

long long evalf(int a){
	long long ans = 0;
	for (int i = n; i > 0; --i)
   		ans = (ans + poly[i]) * a;
	ans += poly[0];
	return ans;
}

int main(){
	cin >> n;
	int index = 1;
	while (n != -1){
   		for (int i = n; i >= 0; --i) 
   			cin >> poly[i];
   		cin >> k;
   		for (int i = 0; i < k; ++i) 
   			cin >> x[i];
   		cout << "Case " << index++ << ":" << endl;
   		for (int i = 0; i < k; ++i) 
   			cout << evalf(x[i]) << endl;
   		cin >> n;
}
return 0;
}