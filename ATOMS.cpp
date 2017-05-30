#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k, m, result;    
    int t, i;
    cin >> t;
    while (t--){
        cin >> n >> k >> m;
        i = 0;
        if (k <= m / n){
            i++;
            result = n * k;
            while ( k <= m / result){
                i++;
                result *= k;
            }
        }
        cout << i << endl;
    }
    return 0;
}