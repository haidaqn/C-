#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n,m;cin>>n>>m;
    long long x = (4*n-m)/2.0;
    long long y = n -x ;
    if( x < 0 || y < 0 || x*2 + y*4 != m) cout<<-1;
    else cout<<x<<" "<<y;
    return 0;
}