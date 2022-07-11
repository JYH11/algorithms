#include <bits/stdc++.h>

using namespace std;
bool com(int a, int b) {
	return a > b;
}
int n,arr[50],arr1[50],ans=0;
int main() {
	cin >> n;
	for (int i = 0; i < 2*n; i++) {
		if (i < n) cin >> arr[i];
		else cin >> arr1[i - n];
	}
	sort(arr, arr + n);
	sort(arr1, arr1 + n,com);
	for (int i = 0; i < n; i++)
		ans += arr[i] * arr1[i];
	cout << ans;
}