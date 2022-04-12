#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin,s);

    if(s[0] >= 'a' and s[0] <= 'z') s[0] -=32;
    
    for ( int i =0; i < s.size(); i++) {
        if( s[i] == ' ' && s[i+1] != ' ' && (s[i+1] >= 'a' and s[i+1] <= 'z') ) s[i+1] -=32;

    }

    cout<<s;

    return 0;
}