#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cac_Buoc_Thuc_Hien = 0;
        int do_Dai_Day_Da_Thay_Doi = 0;
        int i = n - 1;
        while (i >= 0) {
            while (a[n - 1] == a[i]) {
                if (i < 0) {
                    break;
                }
                do_Dai_Day_Da_Thay_Doi++;
                i--;
            }
            if (i < 0) {
                break;
            }else{
                cac_Buoc_Thuc_Hien++;
                i -= do_Dai_Day_Da_Thay_Doi;
                do_Dai_Day_Da_Thay_Doi *= 2;
            }
        }
        cout << cac_Buoc_Thuc_Hien << endl;
    }
    system("pause");
    return 0;
}