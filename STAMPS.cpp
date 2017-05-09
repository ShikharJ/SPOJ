#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++){
		int stamps, friends, a[1000];
		cin >> stamps >> friends;
		for (int j = 0; j < friends; j++){
			int tmp;
			cin >> tmp;
			a[j] = tmp;
		}
		sort(a, a + friends);
		int friend_count = 0, sum = 0;
		for (int j = friends - 1; j >= 0; j--){
			if (sum >= stamps)
				break;
			sum += a[j];
			friend_count++;
		}
		cout << "Scenario #" << i << ":" << endl;
		if (sum >= stamps)
			cout << friend_count << endl << endl;
		else 
			cout << "impossible" << endl << endl;
	}
	return 0;
}