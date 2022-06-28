#include <iostream>
using namespace std;

int a[1000002];
int b[1000002];
int c[2000005];
int n, m;
int x = 0, y = 0;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];

	for (int i = 0; i < n + m; i++) {
		if (x == n) c[i] = b[y++];
		else if (y == m) c[i] = a[x++];
		else if (a[x] <= b[y]) c[i] = a[x++];
		else c[i] = b[y++];
	}
	for (int i = 0; i < n + m; i++) {
		cout << c[i] << ' ';
	}
}