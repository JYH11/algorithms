#include <iostream>

using namespace std;

int main(){
    while(1){
    int x,y,z;
    cin >> x >> y >> z;
    if(x==0 && y==0 && z==0) break;
    int arr[3] = {x,y,z};
    sort(arr,arr+3);
    x = arr[0];
    y=arr[1];
    z= arr[2];
    if(x*x + y*y == z*z) cout << "right" << '\n';
    else cout << "wrong" << '\n';
    }
}