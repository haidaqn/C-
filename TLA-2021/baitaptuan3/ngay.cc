#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int tong;
    if (b == 1) {
        tong = a;
    }
    if (b == 2) {
        tong = 31 + a;
    }
    if (b == 3) {
        tong = 59 + a;
    }
    if (b == 4) {
        tong =  90 + a;
    }
    if (b == 5) {
        tong =  120 + a;
    }
    if (b == 6) {
        tong =  151 + a;
    }
    if (b == 7) {
        tong =  181 + a;
    }
    if (b == 8) {
        tong =  212 + a;
    }
    if (b == 9) {
        tong =  243 + a;
    }
    if (b == 10) {
        tong =  273 + a;
    }
    if (b == 11) {
        tong =  304 + a;
    }
    if (b == 12) {
        tong =  334 + a;
    }
    if(c % 4 == 0 && c % 100 != 0 || c % 400 == 0) {
        if (b > 2) {
           tong++;
        }
    }
    cout << tong << endl;
    
    return 0;
}