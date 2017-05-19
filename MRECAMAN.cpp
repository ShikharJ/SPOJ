#include <bits/stdc++.h>

using namespace std;

long long A[500002];
int is_present[10000000] = {};

int main(){
    long long temp;
    int t;
    A[0] = 0;
    is_present[0] = 1;
    for (long long i = 1; i < 500002; i++){
        temp = A[i - 1] - i;
        if (temp > 0 && is_present[temp] == 0){
            A[i] = temp;
            is_present[temp] = 1;
        }
        else{
            A[i] = A[i - 1] + i;
            is_present[A[i - 1] + i] = 1;
        }
    }
    cin >> t;
    while (t != -1){
        cout << A[t] << endl;
        cin >> t;
    }
    return 0;
}