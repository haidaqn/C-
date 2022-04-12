/* Thái muốn xếp n viên đá để tạo thành 1 cái tháp với những viên đá to để ở dưới cho chắc chắn, những viên đá bé hơn sẽ xếp lên trên. Nhận ra mình đã học thuật toán sắp xếp chọn, Thái nhanh trí xếp n viên đá đó theo thứ tự tăng dần của thể tích. Sau đó Thái sẽ xếp từ viên đá cuối trở về. Vậy Thái đã sắp xếp như thế nào?
Sử dụng thuật toán sắp xếp chọn để sắp xếp n số nguyên theo thứ tự tăng dần.
 */

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>


using namespace std;

int main(){

    int n;
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Moi nhap phan tu thu " << i+1 << " : "; cin >> arr[i];
    };
    for (int i = 0; i < n - 1; i++) {
        int min = arr[i];
        int vi_Tri = 0;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                vi_Tri = j;
            };
        };
        if (arr[i] != min) {
            int temp = arr[i];
            arr[i] = arr[vi_Tri];
            arr[vi_Tri] = temp;
        };
    };

    cout << "Mang da sap xep la: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    };
    system("pause");
    return 0;
}