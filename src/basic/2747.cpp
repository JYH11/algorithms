#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[46];
    arr[0] = 0; arr[1] = 1;
    for(int i=2;i<46;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout << arr[n];
}