#include <bits/stdc++.h>

using namespace std;

int A[1000001] = {};

void cube_free(){
    int k;
    for (int i = 2; i <= 100; i++){
        if (A[i] == 0){
            k = i * i * i;
            for (int j = k; j <= 1000000; j += k){
                A[j] = -1;
            }
        }
    }
    k = 1;
    for (int i = 1; i <= 1000000; i++){
        if (A[i] == 0)
            A[i] = k++;
    }
}

int main(){
    cube_free();
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n;
        if (A[n] != -1)
            cout << "Case " << i << ": " << A[n] << endl;
        else
            cout << "Case " << i << ": Not Cube Free" << endl; 
    }  
    return 0;
}