#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, arr[41] = { 0,1, };
    for (int i = 2; i < 41; i++) arr[i] = arr[i - 1] + arr[i- 2];
    cin >> n;
    while (n--) {
        cin >> x;
        if (x == 0) cout << "1 0" << '\n';
        else
            cout << arr[x-1] << ' ' << arr[x] << '\n';
    }
}