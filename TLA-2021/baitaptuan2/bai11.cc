/* Tô Minh và anh Tiến chơi cờ tỉ phú nhưng luật rừng. Nhà của Tô Minh và anh Tiến trên bản đồ cách nhau n mét. Tô Minh chỉ có 2 cách để di chuyển quân cờ từ nhà Tô Minh đến nhà anh Tiến, hoặc là nhảy ngắn a mét, hoặc là nhảy dài b mét. Vậy quân cờ của Tô Minh cần ít nhất bao nhiêu bước để đến nhà anh Tiến (nếu không có cách đến nhà anh Tiến thì in ra -1)
Đầu vào: Lần lượt n, a, b (1 < n < 105;  1 < a < b < 105)
Đầu ra: Số bước ít nhất
VD:
10 3  4					  3
 */


#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    int n, a, b;
    int min = -1;
    bool kiemtra = true;
    cout << "Nhap n: "; cin >> n;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    
    int i = 0;

    while (kiemtra) {
        for(int j = 0; (j*b) <= n; j++) {
            if ((i*a) + (j*b) == n) {
                min = i + j;
                kiemtra = false;
                break;
            };
        };
        i++;
        if ( (i*a) > n ) {
            kiemtra = false;
        }
    };
    
    if (min == -1) {
        cout << "Ket qua la: " << min << endl;
    }else{
        
        for (i; (i*a) <= n; i++) {
            for (int j = 0; (j*b) + (i*a) <= n; j++) {
                if ((i*a) + (j*b) == n) {
                    if ((i+j) < min) {
                        min = i + j;
                    };
                };
            };
        };
        cout << "Ket qua la: " << min << endl;
    };

    return 0;
}