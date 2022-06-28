#include <iostream>
#include <vector>

using namespace std;
#define X first
#define Y second

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int arr[10][10];
int arr2[10][10];
vector<pair<int, int>> v;
int n, m;
// 가리키고 있는 방향에 따라 모두 7로 만들어주는 함수
void dps(int x, int y, int dir) {
	dir %= 4;
	while (1) {
		x += dx[dir];
		y += dy[dir];
		if (x < 0 || y < 0 || n <= x || m <= y || arr2[x][y] == 6) return;
		if (arr2[x][y] != 0) continue;
		arr2[x][y] = 7;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	int nm = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != 0 && arr[i][j] != 6)
				v.push_back({ i,j });
			if (arr[i][j] == 0) nm++;
		}
	}
	for (int tmp = 0; tmp < (1 << (2 * v.size())); tmp++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				arr2[i][j] = arr[i][j];
		}
		int brute = tmp;
		for (int i = 0; i < v.size(); i++) {
			int dir = brute % 4;
			brute /= 4;
			int x = v[i].X;
			int y = v[i].Y;
			if (arr[x][y] == 1) {
				dps(x, y, dir);
			}
			else if (arr[x][y] == 2) {
				dps(x, y, dir);
				dps(x, y, dir + 2);
			}
			else if (arr[x][y] == 3) {
				dps(x, y, dir);
				dps(x, y, dir + 1);
			}
			else if (arr[x][y] == 4) {
				dps(x, y, dir);
				dps(x, y, dir + 1);
				dps(x, y, dir + 2);
			}
			else {
				dps(x, y, dir);
				dps(x, y, dir + 1);
				dps(x, y, dir + 2);
				dps(x, y, dir + 3);
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) 
				ans += (arr2[i][j] == 0);
		}
		nm = min(nm, ans);
	}
	cout << nm;
}
