#include <bits/stdc++.h>

using namespace std;

int main() {
    int w,h;cin>>h>>w;
    char a[h][w];

    for(int i =0; i <h; i++) {
        for(int j =0; j < w;j++) cin>>a[i][j];
    }
    int dem =0;

    for(int i =0; i <h; i++) {
        for(int j = 1; j < w; j++) if( a[i][j] != a[i][j-1] ) dem++;
    }

    for(int i =  0; i < h-1; i++){
        for(int j = 0; j < w; j++) if( a[i][j] != a[i-1][j] ) dem++;
    }


    cout<<dem;
    return 0;
}