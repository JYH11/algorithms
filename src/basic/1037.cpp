#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());
	cout << max * min;
}