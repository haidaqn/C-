#include <iostream>
#include <vector>
#include <map>

using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1); getline(cin,s2);
    int dem1[26], dem2[26];
    fill_n(dem1,26,0);
    fill_n(dem2,26,0);
    bool check = true;

    for(int i =0 ; i < s1.length(); i++) dem1[s1[i]-'a']++;
    for(int i =0 ; i < s2.length(); i++) dem2[s2[i]-'a']++;
    for(int i =0 ; i < 26;i++){
        if( abs(dem1[i] - dem2[i]) >= 3) 
            check = false;
            break;
    }

    if( check == true) cout<<"YES";
    else cout<<"NO";

    return 0;
}