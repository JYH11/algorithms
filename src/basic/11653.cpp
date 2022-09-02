#include <iostream>

using namespace std;

int main(){
    int n,x=2;
    cin >> n;
    if(n==1) return 0;
    while(n>=x){
        if(n%x==0){
            cout << x << '\n';
            n /= x;
        }
        else x++;
    }
}