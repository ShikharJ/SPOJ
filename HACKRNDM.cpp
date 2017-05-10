#include <bits/stdc++.h>

using namespace std;

bool binary_search(int A[], int num, int N){
	int beg = 0, end = N;
	while (beg <= end){
		int mid = (beg + end) / 2;
		if (A[mid] > num)
			end = mid - 1;
		else if (A[mid] < num)
			beg = mid + 1;
		else
			return true;
	}
	return false;
}

int main() {
	int n, k;
	cin >> n >> k;
	int A[n], i, count = 0;
	for (i = 0; i < n; ++i){
		cin >> A[i];
	}
	sort(A, A + n);
	for (i = 0; i < n; ++i){
		if (binary_search(A, A[i] + k, n))
			++count;
	}
	cout << count << endl;
	return 0;
}