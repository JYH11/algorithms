#include <bits/stdc++.h>

using namespace std;

int N, m, M, T, R;
int main() {
	cin >> N >> m >> M >> T >> R;
	int time = 0,cur =m;
	if (M - m < T) {
		cout << -1;
		return 0;
	}
	while (1) {
		if (cur + T <= M) {
			cur += T;
			N--;
		}
		else {
			cur -= R;
			if (cur < m) cur = m;
 		}
		time++;
		if (N == 0) {
			cout << time;
			return 0;
		}
	}
}