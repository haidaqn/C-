
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int min = 99999;
    int max = 0;
    int dem = 0;

    cout << "Nhap vao so tang banh: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao so luong cherry o tang banh thu " << i+1 << " : "; cin >> arr[i];
    }

    /* while (true) {
        int dem = 0;
        for (int i = 0; i < n; i++) {
            if (arr[0] == arr[i]) {
                dem++;
            }
        }
        min = dem;
        max = dem; 
        break;
    } */

    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                dem++;
            }
        }
        if (dem > max) {
            max = dem;
        }
        if (dem < min) {
            min = dem;
        }
    }
    cout << "Ket qua la: " << min << " " << max << endl;
    system("pause");
    return 0;
}