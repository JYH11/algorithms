#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main() {
	cin >> a >> b >> c;
	int profit = 0, ans=0;
	if (c <= b) {
		cout << -1;
		return 0;
	}
	else
		ans = a / (c - b);
	cout << ans+1;
}