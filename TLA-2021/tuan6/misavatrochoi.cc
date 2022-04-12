#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;cin>>n;
    int dem1 =0, dem2 =0;

    for(int i =1; i<= n;i++) {
        int a,b;
        cin>>a>>b;
        if (a > b) dem1++;
        else if (a< b) dem2++;
        else{
            dem1++;
            dem2++;
        }
    }

    if(dem1 > dem2 ) cout<<"Mishka";
    else if( dem1 < dem2 ) cout<<"Chris";
    else cout<<"Friendship is magic!^^";

    return 0;
}