#include <iostream>

using namespace std;

int main(){
    int x,n,ans=0;
    cin >> x >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        ans += a*b;
    }
    if(x==ans) cout << "Yes";
    else cout << "No";
}