#include <iostream>
using namespace std;
int n,x;
int arr[1000001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		arr[x] += 1;
	}
	for (int i = 0; i < 1000001; i++) 
		for (int j = 0; j < arr[i]; j++) 
			cout << i << '\n';
}