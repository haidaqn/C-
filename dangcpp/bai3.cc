#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;cin>>t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++) {
            if(s[0] >= 'a' and s[0] <= 'z') s[0] -=32;
            if(s[i] == ' ' and s[i+1] >= 'a' and s[i+1] <= 'z'){
                s[i+1] -=32;
            }
        }

        cout<<s;
        cout<<endl;

    }

    return 0;
}