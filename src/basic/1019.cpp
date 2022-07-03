#include <iostream>

using namespace std;

int arr[11];
int n;
void pull(int n, int x) {
	while (n > 0) {
		arr[n % 10] += x;
		n /= 10;
	}
}
void cal(int a, int b, int x) {
	while (a % 10 != 0 && a <= b) {
		pull(a, x);
		a++;
	}
	if (a > b) return;
	while (b % 10 != 9 && b >= a) {
		pull(b, x);
		b--;
	}
	int cnt = (b / 10 - a / 10 + 1);
	for (int i = 0; i < 10; i++)
		arr[i] += cnt * x;
	cal(a / 10, b / 10, x * 10);
}
int main() {
	cin >> n;
	cal(1, n, 1);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";
	return 0;
}