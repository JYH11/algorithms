#include <bits/stdc++.h>

using namespace std;

int n;
int main() {
	cin >> n;
	while (n--) {
		int x, y,z =1;
		long long ans=1;
		cin >> y >> x;
		if (y > x / 2) y = x - y;
		for (int i = x; i > y; i--) {
			ans = ans * i / z++;
		}
		cout << ans << '\n';
	}
}