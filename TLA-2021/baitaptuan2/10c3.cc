#include <iostream>

using namespace std;

int main() {

    int n;cin>>n;
    int a[n], dem[1000] = {0};
    for (int &v : a){
        cin>>v;
        dem[v]++;
    }
    int max = 0;
    int min = INT16_MAX;

    for(int i =0; i <n; i++){
        if(dem[a[i]] > max ) max = dem[a[i]];
    }

     for(int i =0; i < n; i++){
        if(dem[a[i]] <  min ) min = dem[a[i]];
    }

    cout<<min<<" "<<max; 

    return 0;
}