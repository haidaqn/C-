#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,t;cin>>n>>t;
    vector<int> abc(1000005,0);
    for(int i = 0; i<t; i++){
        int a,b;cin>>a>>b;
        abc[a]++;
        abc[b+1]--;
    }
    int dem =0;
    int tong = 0;
    for(int i = 1; i<=n;i++){
        tong+=abc[i];
        if(tong % 3 == 0 ) dem++;
    }
    cout<<dem;
    return 0;
}