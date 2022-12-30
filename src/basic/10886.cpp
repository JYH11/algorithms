#include <iostream>

using namespace std;

int main(){
    int n,a=0,b=0;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x==0) a++;
        else b++;
    }
    if(a>b) cout << "Junhee is not cute!";
    else cout << "Junhee is cute!";

}