
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long x, n;
    double k;
    vector<double> HP;
    cin >> x >> k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double a; 
        cin >> a;
        HP.push_back(a);
    };
    sort(HP.begin(), HP.end());
    long long dandadung = 0;
    long long danbandau = x;
    long long soquaivatchet = 0;
    while (true) {
        if (soquaivatchet == n) {
            break;
        };
        if (dandadung == danbandau) {
            break;
        };
        for (long long i = 1; i <= x; i++) {
            dandadung += 1;
            if (HP[0] <= k*i) {
                x -= i;
                soquaivatchet += 1;
                HP.erase(HP.begin() + 0);
                break;
            };
        };
    };
    if (HP.size() == 0) {
        if (dandadung == danbandau) {
            cout << soquaivatchet << endl;
        }else if (dandadung < danbandau) {
            cout << soquaivatchet << endl;
            cout << danbandau - dandadung << endl;
        };
    }else{
        cout << soquaivatchet << endl;
    };
    return 0;
}