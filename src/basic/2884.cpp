#include <bits/stdc++.h>

using namespace std;

int H, M;
int main() {
	cin >> H >> M;
	if (H != 0) {
		if (M >= 45) cout << H << " " << M - 45;
		else cout << H - 1 << " " << M + 15;
	}
	else {
		if (M >= 45) cout << H << " " << M - 45;
		else cout << 23 << " " << M + 15;
	}
}