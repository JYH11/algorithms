#include <iostream>
#include <array> 
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    int arr[1000];
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    cout << arr[n-k];
}