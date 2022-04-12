#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n; cin>>n;
    map<char,long long> m;
    for(int i=0;i<n;i++){
        char c; cin>>c;
        long long diem; cin>>diem;
        m[c]=diem;
    }
    char ch;
    long long sum=0;
    while(cin>>ch){
        sum+=m[ch];
    }
    cout<<sum;

    return 0;
}