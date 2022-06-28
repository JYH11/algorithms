#include <iostream>

using namespace std;
int n;
int board[20000][20000];
int main() {
	cin >> n;
	while (n--) {
		int x1, y1, r1, x2, y2, r2,len,x,y;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		len = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		x = (r1 - r2) * (r1 - r2);
		y = (r1 + r2) * (r1 + r2);
		if (len == 0) {
			if (x == 0)
				cout << '-1' << '\n';
			else
				cout << '0' << '\n';
		}
		else if (len == x || len == y) cout << '1' << '\n';
		else if (x < len || len < y) cout << '2' << '\n';
		else cout << '0' << '\n';
	}
}