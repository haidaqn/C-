#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>


using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;cin>>n;
    int a[n];
    int sum =0, tonhat= INT16_MIN;
    for(int i =0; i < n; i++){
        cin>>a[i];
        sum = max(a[i], sum +a[i]);
        tonhat = max (sum , tonhat);
        if( tonhat < 0 ) tonhat = 0;
    }
    cout<<tonhat;

    return 0;
}