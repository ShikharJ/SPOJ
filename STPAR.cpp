#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while (1){
		cin >> n;
		if (n == 0)
			break;
		if (n == 1)
			cout << "yes" << endl;
		else{
			stack<int> v;
			int tmp, m, j = 0;
			int a[1000];
			for (int i = 0; i < n; i++){
				cin >> tmp;
				if (i == 0)
					v.push(tmp);	
				else if (tmp <= v.top()){
					v.push(tmp);
				} else{
					while (!v.empty() && tmp > v.top()){
						m = v.top();
						v.pop();
						a[j] = m;
						j++;
					}
					v.push(tmp);
				}
			}
			while (!v.empty()){
				m = v.top();
				v.pop();
				a[j] = m;
				j++;
			}
			bool flag = false;
			for (int i = 0; i < j - 1; i++){
				if (a[i] > a[i + 1]){
					flag = true;
					break;
				}
			}
			if (flag)
				cout << "no" << endl;
			else
				cout << "yes" << endl;
		}
	}
	return 0;
}