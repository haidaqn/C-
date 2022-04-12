/* #include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void timKiemNhiPhan(int n, vector<int> v,map<int,int> m){
    
    int dau =0, cuoi = n, index;
    while ( dau <= cuoi)
    {
        index = (dau+cuoi)/2;
        if( n == v[index] ) {
            cout<<m[v[index]];
            break;
        }
        else if( n > v[index] ) dau = index;
        else cuoi = index;
    }

}

int main() {

    int n;cin>>n;
    vector<int> v(n);
    map<int,int> m;
    for(int &k:v) cin>>k;
    for(int i =0; i < n;i++) m[v[i]] = i;
    sort(v.begin(), v.end());
    timKiemNhiPhan(n,v,m);

    return 0;
} */

/* 
#include <bits/stdc++.h>

using namespace std;

void check(int a[], int l, int r) {
    if( l <= r) {
        int index = l + (r-l)/2;
        if(a[index-1] < a[index] && a[index] > a[index+1]) cout<<index+1;
        else{
            check(a,l,index-1);
            check(a,index+1,r);
        }
    }
}

int main() {

    int n;cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++) cin>>arr[i];
    check(arr,0,n-1);

    return 0;
} */