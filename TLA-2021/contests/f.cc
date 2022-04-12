#include <bits/stdc++.h>

using namespace std;

int n;

int main(){

    int t;cin>>t;
    while (t--)
    {   
        int dem1 =0;
        int dem2 =0;
        cin>>n;
        for(int i = 0; i< n; i++) {
            int a;cin>>a;
            if(a == 1) dem1++;
            if(a == 2) dem2++;
        }
        if(dem1 % 2 != 0 || (dem2 % 2 != 0 and dem2*2 % dem1 != 0) ) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
