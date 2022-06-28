#include <iostream>
using namespace std;

int a[1000002];
int c[1000002];
int n;
int x = 0, y = 0;
void merge(int x, int y) {
	int mid = (x + y) / 2;
	int st = x;
	int en = mid;
	for (int i = x; i < y; i++) {
		if (st == mid) c[i] = a[en++];
		else if (en == y) c[i] = a[st++];
		else if (a[st] <= a[en]) c[i] = a[st++];
		else c[i] = a[en++];
	}
	for (int i = x; i < y; i++) a[i] = c[i];
}
void mergesort(int x, int len) {
	if (len == x + 1) return;
	int mid = (x + len) / 2;
	mergesort(x, mid);
	mergesort(mid, len);
	merge(x, len);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	mergesort(0, n);
	for (int i = 0; i < n; i++) cout << a[i] << ' ';
}
