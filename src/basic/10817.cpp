#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[3];
    for(int i=0;i<3;i++){
        int x;
        cin >> x;
        arr[i]=x;
    }
    sort(arr, arr + 3);
    cout << arr[1];
}