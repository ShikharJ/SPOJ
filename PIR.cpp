#include <bits/stdc++.h>

using namespace std;

int main(){
 	int n;
 	long double W, U, V, w, u, v, result;
 	cin >> n;
 	while (n--){
  		cin >> u >> v >> w >> W >> V >> U;
  		result = sqrt((4 * u * u * w * w * v * v) - (u * u * pow(v * v + w * w - U * U, 2)) - (v * v * pow(w * w + u * u - V * V, 2)) - w * w * pow(u * u + v * v - W * W, 2) + (v * v + w * w - U * U) * (w * w + u * u - V * V) * (u * u + v * v - W * W)) / 12;
  		cout << fixed << setprecision(4) << result << endl;
	}
	return 0;
}