#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int a=0, b=0;
        for (int i = 0; i < 9; i++)
        {
            int x,y;
            cin >> x >> y;
            a+=x;
            b+=y;
        }
        if (a>b) cout << "Yonsei" << '\n';
        else if(b<a) cout << "Korea" << '\n';
        else cout << "Draw" << '\n';
    }
}