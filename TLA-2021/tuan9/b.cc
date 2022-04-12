#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;cin>>n;
    vector<int> v(n);
    map<int,int> m;
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    for(int a: v) m[a]++;
    
    v.erase(unique(v.begin(),v.end()), v.end());

    for(int a:v){
        cout<<a<<" "<<m[a]<<endl;
    }

    return 0;
}