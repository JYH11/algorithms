#include <iostream>

using namespace std;
int arr[16][16];

int main(){
    int n;
    cin >> n;
    for (int i = 1; i < 16; i++){
        arr[1][i] = i;
        arr[i][1] = 1;
    }
    for(int i=2; i<16; i++){
        for(int j =2; j<16; j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    while(n--){
        int k,n;
        cin >> k >> n;
        cout << arr[k+1][n] << '\n';
    }
}
