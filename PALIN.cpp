#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j;
    string s;
    cin >> t;
    while (t--){
        cin >> s;
        int length = s.length();
        j = length;
        i = -1;
        while (++i <= --j){
            if (s[i] != s[j]){
                break;
            }
        }
        if (j < i){
            if (length & 1){
                if (s[length / 2] < '9'){
                    s[length / 2]++;
                    cout << s << endl;
                }
                else{
                    s[length / 2] = '0';
                    i = length / 2 - 1;
                    j = length / 2 + 1;
                    while (i >= 0){
                        if (s[i] < '9'){
                            s[i]++;
                            s[j]++;
                            break;
                        }
                        else{
                            s[i] = s[j] = '0';
                        }
                        i--;
                        j++;
                    }
                    if (i < 0){
                        cout << 1;
                        i = length;
                        while (--i > 0){
                            cout << 0;
                        }
                        cout << 1 << endl;
                    }
                    else{
                        cout << s << endl;
                    }
                }
            }
            else{
                i = length / 2 - 1;
                j = length / 2;
                while(i >= 0){
                    if(s[i] < '9'){
                        s[i]++;
                        s[j]++;
                        break;
                    }
                    else{
                        s[i] = s[j] = '0';
                    }
                    i--;
                    j++;
                }
                if (i < 0){
                    cout << 0;
                    i = length;
                    while (--i > 0){
                        cout << 0;
                    }
                    cout << 1 << endl;
                }
                else{
                    cout << s << endl;
                }
            }
        }
        else{
            if (length & 1){
                i = length / 2 - 1;
                j = length / 2 + 1;
            }
            else{
                i =length / 2 - 1;
                j = length / 2;
            }
            int flag;
            while (i >= 0){
                if (s[i] - s[j] > 0){
                    flag = 1;
                    break;
                }
                else if (s[i] - s[j] < 0){
                    flag = 2;
                    break;
                }
                i--;
                j++;
            }
            if (length & 1){
                i = length / 2 - 1;
                j = length / 2 + 1;
            }
            else{
                i = length / 2 - 1;
                j = length / 2;
            }
            if (flag == 1){   
                while (i >= 0){
                    s[j] = s[i];
                    i--;
                    j++;
                }
            }
            else if (flag == 2 && length & 1 && s[length / 2] < '9'){    
                s[length / 2]++;
                i = length / 2 - 1;
                j = length / 2 + 1;
                while(i >= 0){
                   s[j] = s[i];
                   i--;
                   j++;
                }
            }
            else{                         
                if (length & 1){
                    s[length / 2] = '0';
                }
                while (i >= 0){
                    if (s[i] < '9'){
                        s[i]++;
                        s[j] = s[i];
                        break;
                    }
                    else{
                        s[i] = s[j] = '0';
                    }
                    i--;
                    j++;
                }
                while (i >= 0){
                    s[j] = s[i];
                    i--;
                    j++;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}