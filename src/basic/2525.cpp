#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int main() {
	cin >> a >> b >> c;
	int hr = c / 60;
	int min = c % 60;
	b += min;
	if (b >= 60) {
		a += 1;
		b -= 60;
	}
	a += hr;
	if (a >= 24) a -= 24;
	cout << a << " "<<b;
}