#include <bits/stdc++.h>

using namespace std;


void check(){
    string s;cin>>s;
    int i = s.size()-1;
    while( s[i] == '1' and i>= 0) i--;
    if(i<0){
        for(int a = 0; a < s.size(); a++){
            cout<<0;
        }
        cout<<endl;
    }
    else{
        s[i] = '1';
        for(int a = i+1; a < s.size(); a++ ) s[a] = '0';
        cout<<s<<endl;
    }
}

int main(){

    int t;cin>>t;

    while (t--)
    {
        check();
    }
    

    return 0;
}