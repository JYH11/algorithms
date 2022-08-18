#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s,k;
        cin >> n >> s;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<n; j++){
                k.push_back(s[i]);
            }
        }
        cout << k << '\n';
    }
}