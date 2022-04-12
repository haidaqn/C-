#include <iostream>

using namespace std;

int main() {
    string n;
    cin >> n;
    int doDaiChuoi = n.size();
    if (doDaiChuoi < 2) {
        int so = n[0] - '0';
        if (so % 4 == 0) {
            cout << 4 << endl;
        }else{
            cout << 0 << endl;
        }
    }else{

        
        int so = n[doDaiChuoi - 1] - '0' + (n[doDaiChuoi - 2] - '0')*10;
        cout << so << endl;
        if (so % 4 == 0) {
            cout << 4 << endl;
        }else{
            cout << 0 << endl;
        }
    }

    return 0;
}