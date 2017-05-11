#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long m, long long n){
    if (n == 0) 
        return m;
    return gcd(n, m % n);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n, i;
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else{
            for (i = n / 2; i >= 1; i--){
                if (gcd(n, i) == 1)
                    break;
            }
            cout << i << endl;
        }
    }
    return 0;
}