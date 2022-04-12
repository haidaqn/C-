#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;cin>>n;
    int arr[] = {1,2,5,10,20,50,100,200,500};
    int soToTien =0;
    int i = 8;
    while ( n != 0 || i > 0)
    {
        soToTien += n /arr[i];
        n%=arr[i];
        i--;
    }
    

    cout<<soToTien;

    return 0;
}