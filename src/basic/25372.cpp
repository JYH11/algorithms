#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int j=0;
        if(s.length()>9 || s.length()<6) j=1;
        if(j==0) cout << "yes" << '\n';
        else cout << "no" << '\n';  
    }
}