#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;cin>>t;
    int arr[10000];
    map<int,int> mp;
    for(int i =0; i< t;i++){
        cin>>arr[i];
        int a;cin>>a;
        mp[arr[i]] = a;
    }
    int max = *max_element(arr,arr+t);
    int min = *min_element(arr,arr+t);
    cout<< mp[max] - min;

    return 0;
}