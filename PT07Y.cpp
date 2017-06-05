#include <bits/stdc++.h>

using namespace std;

bool bfs(vector< int > graph[], int u, int n){
	bool visited[n + 1];
	for (int i = 0; i <= n; ++i){
		visited[i] = false;
	}
	queue<int> q;
	q.push(u);
	int p, k, count = 0;
	while (!q.empty()){
		p = q.front();
		q.pop();
		visited[p] = true;
		for (int i = 0; i < graph[p].size(); ++i){
			k = graph[p][i];
			if (visited[k]){
				return false;
			}
			else{
				q.push(k);
			}
		}
		++count;
	}
	if (count != n){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> graph[n + 1];
	int u, v;
	for (int i = 0; i < m; ++i){
		cin >> u >> v;
		graph[u].push_back(v);
	}
	if (bfs(graph, 1, n)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}