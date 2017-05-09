#include <bits/stdc++.h>

using namespace std;

int main(){
	int B[10][5] = {0,0,0,0,0,
      			    0,0,0,0,0,
      			    6,2,4,8,4,
      			    1,3,9,7,4,
      			    6,4,0,0,2,
      			    0,0,0,0,0,
      			    0,0,0,0,0,
      			    1,7,9,3,4,
      			    6,8,4,2,4,
      			    1,9,0,0,2};
 	int t;
 	scanf("%d", &t);
 	while (t--){
  		string A;
  		unsigned long long p;
  		cin >> A;
  		scanf("%llu", &p);
  		int len = A.length(), temp, k;
  		if(p == 0)
   			printf("1\n");
  		else{
   			temp = A[len - 1] - 48;
   			if(temp == 0)
    			printf("0\n");
   			else if(temp == 1)
    			printf("1\n");
   			else if(temp == 5)
    			printf("5\n");
   			else if(temp == 6)
    			printf("6\n");
   			else{
    			k = p % B[temp][4];
    			printf("%d\n", B[temp][k]);
   			}
  		}
 	}
 	return 0;
}