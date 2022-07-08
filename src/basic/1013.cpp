#include <bits/stdc++.h>

using namespace std;

int t;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (regex_match(s, regex("(100+1+|01)+"))) cout << "YES\n";
		else cout << "NO\n";
	}
}