#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int a, b, c;cin>>a>>b>>c;
    int tienthieu = b * c - a;

    if(a >= b * c) cout<<"Y";

    else {
        cout<<"N ";
        cout<<tienthieu;
    }

    return 0;
}