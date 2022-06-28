#include <iostream>

using namespace std;

int main() {
	int n, t;
	cin >> t;
	while (t--) {
		int x1, y1, x2, y2, n,st=0,end=0;
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		while (n--) {
			int x, y, r;
			cin >> x >> y >> r;
			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r)
					end++;
			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					st++;
		}
		cout << st + end << '\n';
	}

}