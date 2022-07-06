#include <bits/stdc++.h>

using namespace std;

int n;
int main() {
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		int ans = a%10;
		for (int i = 1; i < b; i++) {
			ans = (ans * a) % 10;
		}
		if (ans == 0)
			cout << 10 << '\n';
		else
			cout << ans << '\n';
	}
}