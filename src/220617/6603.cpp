#include <iostream>
#include <algorithm>

using namespace std;

int n,x;
int arr[10], ans[10];
bool check[10];

void fun(int cur, int x) {
	if (x == 6) {
		for (int i = 0; i < 6; i++)
			cout << ans[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = cur; i <= n; i++) {
		if (!check[i]) {
			ans[x] = arr[i-1];
			check[i] = 1;
			fun(i+1, x + 1);
			check[i] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		fun(1, 0);
		cout << '\n';
	}
}
