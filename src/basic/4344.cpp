#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c, arr[1000];
    cin >> c;
    while(c--){
        int n;
        double total=0, ans =0;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            total+= arr[i];
        }
        total /= n;
        for(int i=0;i<n;i++){
            if(arr[i] > total) ans++;
        }
        cout << fixed;
        cout .precision(3);
        cout << ans / n * 100 * 1000 / 1000 << "%" << '\n';
    }

}