#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int a,ans=0;
    cin >> a;
    while(a--){
        cin >> s;
        s.erase(0,2);
        int n = stoi(s);
        if(n<=90) ans++;
    }
    cout << ans;
}