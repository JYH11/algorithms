#include <iostream>

using namespace std;
int main(){
    int arr[6],n,temp=0,tem=0,total=0;
    cin >> n;
    for(int i=0;i<6;i++) {
        int x,y;
        cin >>x>>y;
        arr[i] = y;
        if(y>temp) {temp = y; tem=i;}
        total+=y;
    }
    int hz = total/2-temp;
    int temm=0;
    for(int i=0;i<6;i++){
        if(arr[i]==hz) temm=i;
    }
    if(tem-temm==1 || temm-5==tem){
        int q = tem+2;
        int q1 = tem+3;
        if(q>5) q-=6;
        if(q1>5) q1-=6;
        cout << (temp*hz-arr[q]*arr[q1])*n;
    }
    else{
        int w = temm+2;
        int w1=temm+3;
        if(w>5) w-=6;
        if(w1>5) w1 -= 6;
        cout << (temp * hz - arr[w] * arr[w1]) * n;
    }
}