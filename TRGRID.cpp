#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    long long n, m;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n >> m;
        if (n <= m){
            if (n % 2 == 0)
                cout << "L" << endl;
            else 
                cout << "R" << endl;
        }
        else{
            if(m % 2 == 0)
                cout << "U" << endl;
            else 
                cout << "D" << endl;
        }
    }
    return 0;
}