#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long tinh(int a){
    int m = 1000000007;
    if (a <= 1){
        return 1;
    }else{
        return (a*tinh(a-1)) % m;
    }
}

int main(){
    int n;
    cin >> n;
    cout << tinh(n)<< endl;
    return 0;
}






