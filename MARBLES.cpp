#include <bits/stdc++.h>

using namespace std;

long long combinations(int n, int m){
    if (m > n - m) 
        m = n - m;
    long long result = 1;
    for (int i = 0; i < m; i++) 
        result = result * (n - i) / (i + 1);
    return result;
}

int main(){
    int t, n, k;
    cin >> t;;
    while (t--){
        cin >> n >> k;
        cout << combinations(n - 1, k - 1) << endl;
    }
    return 0;
}