#include <iostream>

using namespace std;

int main(){
    int n,ans=0;
    cin >>n;
    while(n--){
        int x;
        cin >> x;
        ans+=x-1;
    }
    cout << ans+1;
}