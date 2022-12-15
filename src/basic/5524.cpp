#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        for(int i=0; i<s.length();i++){
            if(s[i]<='Z' && s[i]>='A') s[i]+=32;
        }
        cout << s << '\n';
    }
}