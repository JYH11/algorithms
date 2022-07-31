#include <iostream>
#include <queue>
#include <algorithm>
int arr[1000000];
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cout << arr[0] << " " << arr[n - 1];
}