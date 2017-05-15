#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long int A[1000][2], a = 0, b = 0;
        int pos;
        for (int i = 0; i < n; i++){
            cin >> A[i][0] >> A[i][1];
            if(A[i][0] > a){
                a = A[i][0];
                pos = i + 1;
            }
            else if (A[i][1] > b)
                b = A[i][1];
        }
        if (a > b)
            cout << pos << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}