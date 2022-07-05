#include <iostream>
#include <algorithm>
using namespace std;

int x, y, w, h, mini;
int main() {
	cin >> x >> y >> w >> h;
	int a = w - x, b = h - y;
	mini = min({ x,y,a,b });
	cout << mini;
}