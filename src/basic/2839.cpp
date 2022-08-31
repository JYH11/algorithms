#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,cnt=0,x,ans=1700;
    cin >> n;
    for(int i=0; i<=1000; i++){
        for(int j=0; j<1666; j++){
            cnt = i*5 + j*3;
            if(n==cnt && ans > i+j) ans = i+j;
        }
    }
    if(ans!=1700)cout << ans;
    else cout << "-1";
}