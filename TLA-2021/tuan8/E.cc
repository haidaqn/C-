#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == k) {
        long long MAX = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > MAX) {
                MAX = arr[i];
            }
        }
        cout << MAX << endl;
    }else{
        if (k == 1) {
            long long MIN = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < MIN) {
                    MIN = arr[i];
                }
            }
            cout << MIN << endl;
        }else if (k == 2) {
            long long MAX = LONG_LONG_MIN;
            long long mIn[n - 1];
            long long MIN = LONG_LONG_MAX;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] < MIN) {
                    MIN = arr[i];
                }
                mIn[i] = MIN;
            }
            MIN = arr[n-1];
            for (int i = n - 1; i > 0; i--) {
                if (arr[i] < MIN) {
                    MIN = arr[i];
                }
                MAX = max(MAX, max(MIN, mIn[i - 1]));
            }
            cout << MAX << endl;
        }else{
            long long MAX = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > MAX) {
                    MAX = arr[i];
                }
            }
            cout << MAX << endl;
        }
    }
    system("pause");
    return 0;
}