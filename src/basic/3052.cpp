#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
int arr[10];
int main(){
    int n,x=1;
    for(int i=0;i<10;i++){
        cin >> n;
        arr[i] = n%42;
    }
    sort(arr,arr+10);
    for(int i=1;i<10;i++)
        if(!(arr[i] == arr[i-1])) x++;
    cout << x;
}