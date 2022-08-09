#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,max=0;
    double ans=0;
    cin >> n;
    for(int i =0; i<n; i++){
        int x;
        cin>> x;
        ans+=x;
        if(max<x) max = x;
    }
    cout << ans/max*100/n;
}