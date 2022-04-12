#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n;cin>>n;
    vector<long long> v(n); 
    for(long long i =0; i < n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int i =1;
    long long tich2 =v[0] * v[1] * v.back();
    long long tich1 =1;
    while ( i <= 3){
        tich1 *=v.back();
        v.pop_back();
        i++;
    }
    if ( tich1 > tich2) cout<<tich1;
    else cout<<tich2;

    
    return 0;
}