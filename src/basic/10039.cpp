#include <iostream>

using namespace std;

int main(){
    int n=5,ans=0;
    while(n--){
        int m;
        cin >> m;
        if(m<40) m=40;
        ans+=m;
    }
    cout << ans/5;
}