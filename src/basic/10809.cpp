#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[26];
    fill_n(arr,26,-1);
    for(int i=0; i<s.size(); i++){
        if(arr[s[i]-97] == -1)
            arr[s[i]-97] = i;
    }
    for(int i=0; i<26; i++)
        cout << arr[i] << " ";
}