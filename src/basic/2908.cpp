#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m; 
    n = (n%10) *100 + ((n/10) %10) *10 + n/100;
    m = (m % 10) * 100 + ((m / 10) % 10) * 10 + m / 100;
    if(n<m) cout << m;
    else cout << n;
}