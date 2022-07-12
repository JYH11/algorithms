#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
int main() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char a;
			cin >> a;
			if ((i + j) % 2 == 0 && a == 'F') cnt++;
		}
	}
	cout << cnt;
	return 0;
}