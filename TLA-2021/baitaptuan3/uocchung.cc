
#include <iostream>

using namespace std;

long long ucln2so(long long a, long long b) {
    long long temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    };
    return a;
};

long long UCLN(long long arr[], long long n) {
    long long a = ucln2so(arr[0], arr[1]);
    long long b = ucln2so(arr[0], arr[1]);
    for (long long i = 2; i < n; i++) {
        b = ucln2so(a, arr[i]);
        a = b;
    };
    return b;
};


int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    };
    cout << UCLN(arr, n) << endl;
    return 0;
}