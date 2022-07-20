#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	if (n > 7) {
		int i = 1;
		n--;
		while (n > i * 6) {
			n -= i * 6;
			i++;
		}
		cout << i + 1;
	}
	else {
		if (n == 1) cout << 1;
		else cout << 2;
	}
}