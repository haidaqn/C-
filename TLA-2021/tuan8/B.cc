#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,m;cin>>n>>m;
    vector<int> v(m);
    for(int &x:v) cin>>x;
    sort(v.begin(), v.end());
    int check = INT16_MAX;

    for(int i = 0; i < m - n + 1;i++) {
        int kq = v[i+n-1] - v[i];   
        check = min(check,kq);
    }
    cout<<check;

    return 0;
} 