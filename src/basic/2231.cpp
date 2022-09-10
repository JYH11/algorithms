#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int cnt=0, x=n;
    while(x>0){
        cnt++;
        x /=10;
    }
    for(int i=cnt*9; i>=cnt; i--){
        int tmp = n - i,temp=0;
        while(tmp>0){
            temp += tmp%10;
            tmp /=10;
        }
        if(temp == i){
            cout << n-i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}