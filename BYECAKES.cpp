#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c, d, e, f, g, h, alpha, beta, gamma, delta;
	while(true){
		scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
		if(a == -1)
			break;
		alpha = (int)ceil((float)a / (float)e);
		beta = (int)ceil((float)b / (float)f);
		gamma = (int)ceil((float)c / (float)g);
		delta = (int)ceil((float)d / (float)h);
		int maximum = max(alpha, max(beta, max(gamma, delta)));
		printf("%d %d %d %d\n", (maximum * e) - a, (maximum * f) - b, (maximum * g) - c, (maximum * h) - d);
	}
    return 0;
}