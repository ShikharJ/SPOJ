#include <bits/stdc++.h>

using namespace std; 
 
int main(){
    int t;
    long long a, b, c;
    cin >> t;
    while (t--){
        scanf("%lld%lld%lld", &a, &b, &c);
        cout << a * a - 2 * b << endl;
    }
}