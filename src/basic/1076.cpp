#include <bits/stdc++.h>

using namespace std;
string arr[3];
int res[3];
string ans[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

int main() {
	for (int i = 0; i < 3; i++) 
		cin >> arr[i];
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 10; j++) 
			if (arr[i] == ans[j]) 
				res[i] = j;
	int answ = res[0] * 10 + res[1];
	if (answ == 0) {
		cout << '0';
	}
	else {
		cout << answ;
		for (int i = 0; i < res[2]; i++) {
			cout << '0';
		}
	}
}