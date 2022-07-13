#include <bits/stdc++.h>

using namespace std;

int n,sec=0,ans,tmp;
int main() {
	cin >> n;
	ans = n;
	while (1) {
		tmp = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		sec++;
		n = tmp;
		if (tmp == ans)
			break;
	}
	cout << sec;

}