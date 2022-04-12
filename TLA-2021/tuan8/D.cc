#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int result = -1;
        int n, k;
        cin >> n >> k;
        int x[n];
        int y[n];
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
        bool t_Or_F = false;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                int MAX = abs(x[i] - x[j]) + abs(y[i] - y[j]);
                if (MAX <= k) {
                    count++;
                }
            }
            if (count == n) {
                result = 1;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}