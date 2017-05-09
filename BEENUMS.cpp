#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	while (1){
		cin >> n;
		if (n == -1)
			break;
		if(n % 2){
            n--;
            if(n%3 == 0){
                n /= 3;
                n = (n * 4) + 1;
                int t = sqrt(n);
                if((t * t) == n){
                    if(t % 2)
                        cout << "Y" << endl;
                    else
                        cout << "N" << endl;
                }else
                    cout << "N" << endl;
            }else
                cout << "N" << endl;
        }else
            cout << "N" << endl;
	}
	return 0;
}