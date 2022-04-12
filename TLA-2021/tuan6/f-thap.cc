#include <iostream>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;
    map<int, int> mp;
    for (int i = 1; i <= N; i++) {
        int a; cin >> a;
        mp[a]++;
    }
    int MAX = -100000;
    for (auto i : mp) {
        if (i.second > MAX) {
            MAX = i.second;
        }
    }
    cout << MAX << " " << mp.size() << endl;
    return 0;
}