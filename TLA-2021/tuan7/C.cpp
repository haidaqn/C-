#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool check = true;
        while (true)
        {
            if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[0] == '0') {
                cout << "YES" << endl;
                check = false;
                break;
            }
            if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') {
                cout << "YES" << endl;
                check = false;
                break;
            }
            if (s[0] == '2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') {
                cout << "YES" << endl;
                check = false;
                break;
            }
            if (s[0] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') {
                cout << "YES" << endl;
                check = false;
                break;
            }
            if (s[n-4] == '2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') {
                cout << "YES" << endl;
                check = false;
                break;
            }
            break;
        }
        if (check) cout << "NO" << endl;   
    }
    return 0;
}