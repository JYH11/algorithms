#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,x,ans=0;
    cin >> n;
    x=n;
    while(n--){
        string s;
        cin >> s;
        int cnt =0;
        char arr[101];
        arr[0] = s[0];
        for(int i=1;i<s.length();i++){
            if(s[i] != s[i-1]){
                cnt++;
                arr[cnt] = s[i];
            }
        }
        for(int i=0;i<=cnt-1;i++){
            int flag=0;
            for(int j=i+1;j<=cnt;j++){
                if(arr[i] == arr[j]) {ans++; flag=1; break;}
            } 
            if(flag ==1) break;  
        }
    }
    cout << x-ans;
}