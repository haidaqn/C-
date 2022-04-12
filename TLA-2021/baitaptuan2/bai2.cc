#include <bits/stdc++.h>

using namespace std;

int main(){
    int yea;cin>>yea;
    if(yea % 400 == 0 or (yea % 4 == 0 and yea % 100 != 0)){
        cout<<"day la nam nhuan!";
    }else cout<<"nam ", yea ," không phải năm nhuận";


    return 0;
}