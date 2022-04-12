#include <iostream>

using namespace std;

int n, m, a[70], check, cnt;

void ktao() {
    cnt = 1;
    a[1] = m;
}

void sinh() {
    int i = cnt;
    while (i >= 1 && a[i] == 1) {
        i--;
    }

    if (i == 0) {
        check = 0;
    }else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d / a[i];
        int r = d % a[i];
        if (q) {
            for (int j = 1; j <= q; j++) {
                cnt++;
                a[cnt] = a[i];
            }
        }
        if (r) {
            cnt++;
            a[cnt] = r;
        }
    }
}

int main() {
    int result = 0;
    cin >> n >> m;
    ktao();
    check = 1;
    while (check) {
        if (cnt <= n) {
            result++;
        }
        sinh();
    }
    cout << result << endl;
    
    return 0;
}