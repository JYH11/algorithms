#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,ans=0;
    string x;
    cin >> n >> x;
    for(int i=0; i<n; i++){
        ans += x[i] - '0';
    }
    cout << ans;
}