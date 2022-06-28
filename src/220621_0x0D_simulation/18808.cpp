#include <iostream>

using namespace std;
int n, m, k,r,c;
int note[41][41];
int paper[41][41];

void rotate() {
	int temp[12][12];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			temp[i][j] = paper[i][j];
		}
	}
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			paper[i][j] = temp[r - 1 - j][i];
		}
	}
	swap(r, c);
}

bool postable(int x, int y) {
	// 겹치는 칸이 있는지 확인
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (paper[i][j] == 1 && note[x + i][y + j] == 1)
				return false;
		}
	}
	// 없다면 새로 갱신
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (paper[i][j] == 1)
				note[x + i][y + j] = 1;
		}
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> k;
	while (k--) {
		cin >> r >> c;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++)
				cin >> paper[i][j];
		}
		for (int rot = 0; rot < 4; rot++) {
			bool is_post = 0;
			for (int i = 0; i <= n - r; i++) {
				if (is_post) break;
				for (int j = 0; j <= m - c; j++) {
					if (postable(i, j)) {
						is_post = 1;
						break;
					}
				}
			}
			if (is_post) break;
			rotate();
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			ans += note[i][j];
		}
	}
	cout << ans;
 }