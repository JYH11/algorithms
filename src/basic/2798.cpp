#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,ans=0;
    cin >> n >> m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x; 
        v.push_back(x);
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1; j<n-1;j++){
            for(int k=j+1; k<n; k++){
                int temp = v[i]+v[j]+v[k];
                if(temp == m){
                    cout << temp;
                    return 0;
                }
                else if(ans<temp && temp < m)
                    ans = temp;
            }
        }
    }
    cout << ans;
    return 0;
}