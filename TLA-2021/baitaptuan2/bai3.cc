#include <iostream>
#include <string.h>


using namespace std;

int main(){
    string s;
    getline(cin,s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
        
    }
    /* for (int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' and s[i] <= 'S'){
            s[i] +=32;
        }  ##in ra chữ hoa
    } */
    cout<<s;
    return 0;
}