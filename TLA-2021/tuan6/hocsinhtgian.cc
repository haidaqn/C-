#include <bits/stdc++.h>

using namespace std;

void tim(){
    int a, max = 0;
    cin>>a;
    string s;
    cin>>s;
    for(int i =0; i<s.size()-1; i++){
        int dem = 0;
        if( s[i] == 'A') {
            for(int j = i+1; j < s.size(); j++) {
                if(s[j] == 'P') dem++;
                else break;
            }
        }
        if (max < dem) {
            max = dem;
        }
    }
    cout<<max<<endl;

}
int main(){
    int t;cin>>t;
    while (t--) tim(); 
    return 0;
}