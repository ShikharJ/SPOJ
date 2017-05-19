#include <bits/stdc++.h>

#define mod 10000007

using namespace std;

long long int mul(long long x,long long y){
    long long ans = 1;
    while (y > 0){
        if (y % 2)
            ans = (ans * x) % mod;
        x = (x * x) % mod;
        y = y >> 1;
    }
    return ans;
}

int main(){
    long long n, k;
    while (1){
        cin >> n >> k;
        if (n == 0 && k == 0)
            return 0;
        else{
            long long s1, s2, s3, s4;
            s1 = (2 * mul(n - 1, n - 1) ) % mod;
            s2 = (2 * mul(n - 1, k) ) % mod;
            s3 = mul(n, k);
            s4 = mul(n, n);
            long long result = (s1 + s2 +s3 + s4) % mod;
            cout << result << endl;
        }
    }
    return 0;
}