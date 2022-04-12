#include <iostream>
#include <map>

using namespace std;

int main() {

    int n;cin>>n;
    int a[n];
    map<int, int> v;

    for(int &x : a){
        cin>>x;
        v[x]++;
    }

    int max = 0;
    int min = INT16_MAX;

    for (int i =0; i <n; i++){
        if(v[a[i]] > max) max = v[a[i]];
    }
    for (int i =0; i <n; i++){
        if(v[a[i]] < min ) min = v[a[i]];
    }
    
    cout<< min << " "<<max;
    return 0;
}