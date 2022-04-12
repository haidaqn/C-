#include <bits/stdc++.h>

using namespace std;

void check(){
    string a,b,c;
    cin>>a>>b>>c;
    bool kt = true;
    for(int i =0; i<a.size(); i++){
        if (a[i] != b[i] ){
            if(c[i] != a[i] && c[i] != b[i]){
                kt = false;
                break;
            }
        }
        if(a[i] == b[i]){
            if(c[i] != a[i]){
                kt = false;
                break;
            }
        }
    }
    if(kt) cout<<"YES\n";
    else cout<<"NO\n";
}


int main() {

    int n;cin>>n;
    while (n--)
    {
        check();
    }
    

}