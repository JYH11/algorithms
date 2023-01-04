#include <iostream>
#include <array>
using namespace std;
int arr[9];
int main(){
    int n;
    cin >> n;
    while(n>0){
        int m = n%10;
        if(m==6 || m==9) arr[6]++;
        else arr[m]++;
        n/=10;
    }
    if(arr[6]%2==0) arr[6]/=2;
    else arr[6] = arr[6]/2+1;
    int ans=0;
    for(int i=0; i<9;i++){
        if(ans<arr[i]) ans = arr[i];
    }
    cout << ans;
}