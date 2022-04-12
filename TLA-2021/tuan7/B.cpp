#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int result;
        if ((n % 10) == 9) {
            result = (n / 10) + 1;
        }else{
            result = (n / 10);
        }
        cout << result << endl;
    }
    return 0;
}