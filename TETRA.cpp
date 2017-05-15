#include <bits/stdc++.h>

using namespace std;

long double area(long double x, long double y, long double z){
	long double s = (x + y + z) / 2;
	return sqrt(s * (s - x) * (s - y) * (s - z));
}

int main(){
 	int n;
 	long double W, U, V, w, u, v, volume, areas, result;
 	cin >> n;
 	while (n--){
 		areas = 0;
  		cin >> u >> v >> w >> W >> V >> U;
  		areas = area(u, V, w) + area(W, u, v) + area(W, V, U) + area(U, v, w);
  		volume = sqrt((4 * u * u * w * w * v * v) - (u * u * pow(v * v + w * w - U * U, 2)) - (v * v * pow(w * w + u * u - V * V, 2)) - w * w * pow(u * u + v * v - W * W, 2) + (v * v + w * w - U * U) * (w * w + u * u - V * V) * (u * u + v * v - W * W)) / 12;
  		result = (volume * 3) / areas;
  		cout << fixed << setprecision(4) << result << endl;
	}
	return 0;
}