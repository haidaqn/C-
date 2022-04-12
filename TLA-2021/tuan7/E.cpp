#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int number = 1;
        bool check = true;
        while (number <= n) {
            if ((n - number) % b == 0) {
                cout << "Yes" << endl;
                check = false;
                break;
            }
            number *= a;
        }
        if (check) {
            cout << "No" << endl;
        }
    }
    return 0;
}