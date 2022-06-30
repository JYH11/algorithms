#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, f;
	vector<int> v;
	cin >> n >> f;
	int cnt = n % 100;
	n += 99 - cnt;
	for (int i = 0; i < 100; i++) {
		if (n % f == 0) v.push_back(n % 100);
		n--;
	}
	int min = *min_element(v.begin(), v.end());
	if (min < 10) cout << '0' << min;
	else cout << min;
}