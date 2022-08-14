#include <iostream>

using namespace std;
int arr[3],ans=0;
bool check[1000];
void nn(int n){
    int i=0;
    while(n){
        arr[i] = n%10;
        n /= 10;
        i++;
    }
    int a1 = arr[2] - arr[1];
    int a2 = arr[1] - arr[0];
    if (a1 == a2)
        ans++;

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if(n<100) cout <<n;
    else if (n==1000) cout << 144;
    else{
    for(int i=100; i<=n; i++)
        nn(i);
    cout << ans+99;
    }
}