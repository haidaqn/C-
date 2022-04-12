#include <bits/stdc++.h>

using namespace std;

int main() {

    int k ;cin >> k;
    int duyt[26] ;
    fill_n(duyt,26,0);
    string s;cin >> s;
    for(int i =0; i < s.length(); i++) duyt[s[i] - 'a']++;

    for(int i = 1; i<= k; i++) {
        for(int i =0; i< 26 ;i++) {
            if(duyt[i] <= k-1 ){
                cout<<-1;
                break;
            }
            else {
                cout<<char(duyt[i] + 'a');
            }
        }        
    }
    return 0;
}