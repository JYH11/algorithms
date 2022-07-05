#include <bits/stdc++.h>

using namespace std;
long long t, x, y;

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		double dis = y - x, dqrt = sqrt(dis);
		int qrt = round(dqrt);
		if (dqrt <= qrt) cout << qrt * 2 - 1 << '\n';
		else cout << qrt * 2 << '\n';
	}
}