#include <iostream>

using namespace std;

int main() {

    long long x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;

    if(v1 == v2){
        if( x1 == x2 ) cout<<"YES"<<endl;
        else cout<<"NO";
    }
    if(v1 < v2 ) {
        if( x1 < x2 ) {
            cout<<"NO";
        }
    }
    if(v1 > v2 ) {
        if((x2 - x1) % ( v1 - v2 ) == 0) cout<<"YES"<<endl;
        else cout<<"NO"; 
    }
    return 0;
}