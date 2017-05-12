#include <bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin >> t;
   while (t--){
       int n;
       cin >> n;
       int A[10009];
       for(int i = 0; i < n; i++)
           cin >> A[i];
       long long sum = 0;
       for(int i = 0; i < n / 2; i++){
            sum += ((n - 2 * i - 1) * (A[n - i - 1] - A[i]));
       }
       cout << sum << endl;
    }
    return 0;
}