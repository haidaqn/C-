#include <iostream>

using namespace std;

int main(){

    int n,a,b;cin>>n>>a>>b;

    int min = -1;

    for ( int i = n/b; i > 0; i --){
        if((n - i*b) % a == 0){
            min = i + (n - i * b)/a;
        }
    }

    cout<<min;


    return 0;
}