#include <iostream>

using namespace std;

bool arr[1000001];
long long mini, maxi,square,ans = 0;

int main() {
	cin >> mini >> maxi;
	for (long long i = 2; i * i <= maxi; i++) {
		square = mini / (i * i);
		if (mini % (i * i)) square++;
		while (square * i * i <= maxi) {
			arr[square * i * i - mini] = 1;
			square++;
		}
	}
	for (int i = 0; i <= maxi - mini; i++)
		if (!arr[i]) ans++;
	cout << ans;
}