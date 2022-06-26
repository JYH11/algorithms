#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n;
bool compare(const string& a, const string& b) {
	if (a.size() != b.size()) return a.size() < b.size();
	int xx = 0, yy = 0;
	for (int i = 0; i < a.size(); i++) {
		if ('0' <= a[i] && a[i] <= '9') xx += a[i] - '0';
		if ('0' <= b[i] && b[i] <= '9') yy += b[i] - '0';
	}
	if (xx != yy) return xx < yy;

	return a < b;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++) {
		string l;
		cin >> l;
		v.push_back(l);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}
}