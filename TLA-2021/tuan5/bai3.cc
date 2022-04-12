// Nhập vào một mảng, tính tổng các phẩn tử chỉ xuất hiện duy nhất một lần trong mảng.

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> m; 
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i]; 
    int sum=0;
    for(int k: v) m[k]++;   
    for(int k: v) 
        if(m[k]==1) sum += k;   
    cout << "tong = " <<sum<< endl;
    return 0;
}