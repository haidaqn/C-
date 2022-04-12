#include <bits/stdc++.h>
using namespace std;

int n,abc[20][20];

void in(){
    for(int i = n;i > 0;i--){
        cout<<"[ ";
        for(int j =1; j< i;j++) cout<<abc[i][j]<<" ";
        cout<<abc[i][i]<<" ]";
    }
}

void dequy(int i){
    if( i == 0) return;
    for(int j = 1; j<i;j++) abc[i-1][j] = abc[i][j] + abc[i][j+1];
    dequy(i-1);
}

int main() {

    int t;cin>>t;

    while (t--){
        cin>>n;
        for(int i = 1; i<= n;i++) cin>>abc[n][i];
        dequy(n);
        in();
    }
    

    return 0;
}