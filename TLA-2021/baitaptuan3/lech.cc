#include <iostream>
#include <vector>
#include <algorithm>    

using namespace std;

int main() {

    long long n;cin>>n;
    vector<long long> v(n);

    if(n >=3){
        for(long long &x :v) cin>>x;

        sort(v.begin(), v.end());

    }

    cout<<v.back()-v.front();

    return 0;
}