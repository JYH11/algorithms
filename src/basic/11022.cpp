#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,i=1;
        cin >> a>>b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << '\n';
    }
}