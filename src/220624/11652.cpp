#include <iostream>
#include <algorithm>
using namespace std;
int n;
long long arr[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	int cnt = 0, ans = 0; 
	long long max = -(1ll << 62) - 1;
	for (int i = 0; i < n; i++) {
		if (i == 0 || arr[i - 1] == arr[i]) cnt++;
		else {
			if (cnt > ans) {
				ans = cnt;
				max = arr[i - 1];
			}
			cnt = 1;
		}
	}
	if (cnt > ans) max = arr[n - 1];
	cout << max;
}