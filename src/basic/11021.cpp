#include <iostream>

using namespace std;

int t;
int main(){
    cin >> t;
    int i=1;
    while(t--){
    int a,b;
    cin >> a >> b;
    cout << "Case #" << i<< ": "<< a+b << '\n';
    i++;
    }
    
}