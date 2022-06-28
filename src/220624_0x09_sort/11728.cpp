#include <iostream>
#include <vector>
using namespace std;

int a[1000002];
int b[1000002];
vector<int> v;
int n, m;
int x = 0, y = 0;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < m; i++) cin >> b[i];

	for (int i = 0; i < n+m; i++) {
		if (x == n) v.push_back(b[y++]);
		else if (y == m) v.push_back(a[x++]);
		else if (a[x] <= b[y]) v.push_back(a[x++]);
		else v.push_back(b[y++]);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
}