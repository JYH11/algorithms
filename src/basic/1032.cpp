#include <iostream>
#include <string>
char arr[51];

using namespace std;

int main() {
	int n,x;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		x = s.size();
		for (int i = 0; i < x; i++) {
			if(arr[i] == 0)
				arr[i] = s[i];
			else if(arr[i] != s[i]) {
				arr[i] = '?';
			}
		}
	}
	for (int i = 0; i < x; i++)
		cout << arr[i];
}