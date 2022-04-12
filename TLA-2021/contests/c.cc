#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n,S;cin>>n>>S;
    long long tong = n*(n+1) /2;
    cout<<abs(tong - S);

    return 0;
}