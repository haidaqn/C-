#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m,a,b;cin>>n>>m>>a>>b;

    int c = n % m;
    int d = n / m;
    int x = n * a;
    int y = d*b + c*a;
    int z = b* ( d + 1) ;

    if(a*m <= b ) cout<<x;
    else cout<<min(y,z);

    return 0;
}