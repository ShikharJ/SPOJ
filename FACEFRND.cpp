#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    set<int> friends, friendoffriends;
    cin >> n;
    for(int i = 0; i < n; i++){
        int id, m;
        cin >> id >> m;
        friends.insert(id);
        if(friendoffriends.end() != friendoffriends.find(id)) 
        	friendoffriends.erase(id);
        for(int j = 0; j < m ; j++){
            cin >> id;
            if(friends.end() == friends.find(id)) 
            	friendoffriends.insert(id);
        }
    }
    cout << friendoffriends.size() << endl;
    return 0;
}