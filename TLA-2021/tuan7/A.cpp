#include <iostream>

using namespace std;

int main() {
    int n, m;
    long long muN = 2;
    cin >> n >> m;
    bool check = true;
    for (int i = 1; i < n; i++) {
        if (muN > m) {
            cout << m << endl;
            check = false;
            break;
        }
        muN *= 2;
    }
    if (check) {
        if (muN == m) {
            cout << 0 << endl;
        }else{
            cout << m % muN << endl;
        };
    }
    return 0;
}