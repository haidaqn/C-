#include <bits/stdc++.h>

using namespace std;

string s;
int a[100];
bool chuaxet[100];


void Try(int i){
    for(int j =0; j<s.size();j++){
        if(!chuaxet[j]){
            a[i] = j;
            chuaxet[j] = true;
            if(i == s.size() ){
                for(int b = 1 ; b<=s.size();b++) cout<<s[a[b]];
                cout<<"   ";
            }
            else Try(i+1);
            chuaxet[j] = false;
        }
    }
}

int main() {

    ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while (t--)
    {
        cin>>s;
        memset(chuaxet,false,100);
        sort(s.begin(), s.end());
        Try(1);
        cout<<endl;
    }
    
    return 0;
}