#include <bits/stdc++.h>

using namespace std;
int n,arr[100];

void check(int i){
    for(int j = 0; j <=1;j++){
        arr[i] = j;
        if( i == n-1){
            for(int a = 0; a < n; a++){
                if(arr[a] == 0 ) cout<<'A';
                else cout<<'B';
            }
            cout<<"   ";
        }
        else check(i+1);

    }
}

int main(){

    int t;cin>>t;
    
    while (t--)
    {
        cin>>n;
        check(0); 
    }
    

    return 0;
}