#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i =1; i<=t;i++) {
        int x;
        cin >>x;
        int a[x];
        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }
        if(x == 1 && a[0] % 2 == 1) {
            cout << "-1\n";
            
        } else {
            if(a[0] % 2 == 0) {
                cout << "1\n";
                cout << "1\n";
            } else if (a[1] % 2 == 0) {
                    cout << "1\n";
                    cout << "2\n";
                } else {
                    cout << "2\n";
                    cout << "1 " << "2\n";
                }
            }
        }
    return 0;
}