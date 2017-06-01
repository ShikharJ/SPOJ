#include <bits/stdc++.h>

using namespace std;

int A[2000] = {};

int binarysearch(int start, int end, int num){
	if (start == end or start > end)
		return end;
	int mid = start + (end - start) / 2;
	if (A[mid] == num)
		return mid;
	if (A[mid] < num)
		binarysearch(mid + 1, end, num);
	else
		binarysearch(start, mid - 1, num);
}

int main(){
	int n, count;
	while (1){
		cin >> n;
		count = 0;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++){
			cin >> A[i]; 
		}
		sort(A, A + n);
		for (int i = 0; i < n - 2; i++){
			for (int j = i + 1; j < n - 1; j++){
				int localcount = 0;
				int sum = A[i] + A[j];
				int k = binarysearch(j + 1, n - 1, sum);
				if (A[k] > sum)
					localcount = n - k;
				else if (k + 1 < n && A[k + 1] > sum )
				    localcount = n - 1 - k;
				else {
					while (1){
						if (A[k] == sum && k < n)
							k++;
						else
							break;
					}
					if (k != n and A[k] > sum)
						localcount = n - k;
				}
				count += localcount;
			}
		}
		cout << count << endl;
	}
	return 0;
}