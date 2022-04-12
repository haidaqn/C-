#include <iostream>

using namespace std;

int main() {
    string a; int k;
    cin >> a >> k;
    long long vi_Tri = 0;
    while (k > 0 && vi_Tri != a.size() - 1) {
        long long vi_Tri_Thay_Doi = vi_Tri;
        if (vi_Tri + k >= a.size() - 1) {
            int MAX = a[vi_Tri] - '0';
            for (long long i = vi_Tri + 1; i <= a.size() - 1; i++) {
                if ((a[i] - '0') > MAX) {
                    vi_Tri_Thay_Doi = i;
                    MAX = a[i] - '0';
                };
            };
        }else{
            int MAX = a[vi_Tri] - '0';
            for (long long i = vi_Tri + 1; i <= vi_Tri + k; i++) {
                if ((a[i] - '0') > MAX) {
                        vi_Tri_Thay_Doi = i;
                        MAX = a[i] - '0';
                };
            };
        }
        for (long long i = vi_Tri_Thay_Doi; i > vi_Tri; i--) {
            char temp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp;
            k--;
        }
        vi_Tri++;
    };
    cout << a << endl;
    system("pause");
    return 0;
}