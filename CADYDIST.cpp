#include <bits/stdc++.h>

using namespace std;

int less_than(const void * a, const void * b){
    return ((*(long long *)a - *(long long *)b) < 0);
}
int greater_than(const void * a, const void * b){
    return ((*(long long *)b - *(long long *)a) < 0);
}

int main(){
    long long N, c, p, t, cz, pz;
    long long C[100001];
    long long P[100001];
    for (int i = 0; i <= 100000; i++){ 
        C[i] = 0; 
        P[i] = 0; 
    }
    cin >> N;
    while (N != 0){
        t = 0; 
        cz = 0;
        pz = 0;
        for (int i = 0; i < N; i++){
            cin >> c;
            C[cz++] = c;
        }
        for(int i = 0; i < N; i++){
            cin >> p;
            P[pz++] = p;
        }
        qsort(C, cz, sizeof(long long), less_than);
        qsort(P, pz, sizeof(long long), greater_than);
        for (int i = 0; i < cz; i++){
            t += C[i] * P[i];
            C[i] = 0;
            P[i] = 0;
        }
        cout << t << endl;
        cin >> N;
    }
    return 0;
}