#include <iostream>
#include <array>
using namespace std;

int arr[10000];

int nn(int n){
    int sum = n;
    while(n){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(){
    for(int i=1; i<=10000; i++){
        int n= nn(i);
        arr[n] = 1;
    }
    for (int i = 1; i <= 10000; i++)
        if(arr[i] != 1) cout << i << '\n';
    
}