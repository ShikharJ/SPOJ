#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, sum = 0;
        cin >> n;
        int i = 0;
        while (sum < n){
            i++;
            sum += i;
        }
        int temp = n - (sum - i);
        int total = i + 1;
        if (i % 2 == 0)
            cout << "TERM " << n << " IS " << temp << "/" << total - temp << endl;
        else
            cout << "TERM " << n << " IS " << total - temp << "/" << temp << endl;
    }
    return 0;
}