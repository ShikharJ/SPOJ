#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, k = 1;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long int A[n], B[n], max = 0;
        for (int i = 0; i < n; i++){
            cin >> A[i];
            B[i] = 0;
        }
        B[0] = A[0];
        B[1] = A[1];
        for (int i = 2; i < n; i++){
            for (int j = 0; j < i - 1; j++){
                if (B[i] < B[j] + A[i])
                    B[i] = B[j] + A[i];
            }
        }
        for (int i = 0; i < n; i++){
            if (max < B[i])
                max = B[i];
        }
        cout << "Case " << k++ << ": " << max << endl;
    }
    return 0;
}