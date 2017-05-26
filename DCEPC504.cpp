#include <bits/stdc++.h>

using namespace std;

char find(int n, long long k){
    if (n == 0 && k == 0)
    return 'M';
    long long parent = k >> 1;
    char c = find(n - 1, parent);
    if (k == 2 * parent)
        c = ((c == 'M') ? 'M' : 'F');
    else
        c = ((c == 'M') ? 'F' : 'M');
    return c;
}

int main(){
    int n, t;
    long long k;
    cin >> t;
    while (t--){
        cin >> n >> k;
        n--;
        k--;
        if (find(n, k) == 'M')
        	cout << "Male" << endl;
        else
        	cout << "Female" << endl;
    }
    return 0;
}