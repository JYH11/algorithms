#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int arr[51][51];
int n, m,mini,ans=1;

int main() {
	cin >> n >> m;
	mini = min(n, m);
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j]-'0';
		}
	}
			

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 1; k < mini; k++) {
				if (i + k < n && j + k < m && arr[i][j] == arr[i][j + k] && arr[i + k][j] == arr[i + k][j + k] && arr[i][j+k] == arr[i+k][j])
					ans = max(ans, k+1);
			}
		}
	}
	cout << ans*ans;
}