#include <iostream>

using namespace std;
int fibo(int a){
    int a1=0, a2=1;
    if(a==1) return 0;
    else if(a==2) return 1;
    else return fibo(a-1)+fibo(a-2); 
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << fibo(n+1);
}