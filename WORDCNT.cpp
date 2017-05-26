#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string str, word;
    cin >> n;
    getline(cin, str);
    for (int i = 0; i < n; i++){
        int size = 0, count = 0, maxcount = 0;
        getline(cin, str);
        istringstream iss(str, istringstream::in);
        while (iss >> word){
            if (word.length() == size) 
                count++;
            else{
                size = word.length();
                count = 1;
            }
            if (count > maxcount) 
                maxcount = count;
        }
        cout << maxcount << endl;
    }
    return 0;
}