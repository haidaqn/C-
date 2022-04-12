#include <bits/stdc++.h>

using namespace std;

long long ticha =1,tichb =1;

int ucln(long long a, long long b){
    while ( b != 0)
    {
        long long c = a%b;
        a=b;b=c;
    }
    return a;
}

int main() {

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        long long ticha =1, tichb=1;
        for(int i =0; i, n;i++){
            int a;cin>>a;
            ticha*=a;
        }
        for(int i =0; i, n;i++){
            int b;cin>>b;
            tichb*=b;
        }
        int toigian = ucln(ticha, tichb);
        int mau = tichb / toigian;
        if(mau % 2 != 0 and mau % 5 != 0 ) cout<<"finite\n";
        else cout<<"repeating\n";
    }
    
    return 0;
}