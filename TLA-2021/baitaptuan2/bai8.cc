/* Tô Minh khoe anh Tiến vừa được học bất đẳng thức tam giác. Anh Tiến đang cọc cằn vì bị crush dỗi nên đố: “Bây giờ anh cho chú 3 số nguyên bất kỳ, chú tính cho anh chi phí nhỏ nhất để biến nó thành 3 cạnh của một tam giác, không thì đi rửa bát” (thêm hoặc bớt 1 đơn vị được coi là 1 chi phí). Anh em hãy giúp Tô Minh không phải rửa bát.
Đầu vào: 3 số nguyên a, b, c
Đầu ra: Chi phí nhỏ nhất 

VD:
 input: 3 5 17			output:  10

*/


/* #include <iostream>

using namespace std;

int main(){

    int a, b, c;cin>>a>>b>>c;

    if(a + b > c and a + c > b and b + c > a) cout<<0;
    else{
        if(a + b <= c) cout<<c - a - b + 1;
        else if (a + c <= b) cout<<b + 1 - a - c;
        else if (b + c <=a) cout<< a + 1 - b - c;
    }

    return 0;
} */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    vector<int> v;
    int tham_So = 0;;
    int dem = 0;
    int result = 0;
    cout << "Moi nhap a: "; cin >> a;
    cout << "Moi nhap b: "; cin >> b;
    cout << "Moi nhap c: "; cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Ket qua la: " << result << endl;
    }else{
        if (a <= 0) {
            dem++;
            result += -a;
        }else{
            v.push_back(a);
            tham_So += a;
        };
        if (b <= 0) {
            dem++;
            result += -b;
        }else{
            v.push_back(b);
            tham_So += b;
        };
        if (c <= 0) {
            dem++;
            result += -c;
        }else{
            v.push_back(c);
            tham_So += c;
        };

        if (dem == 1) {
            if (v[0] >= v[1]) {
                result += (v[0] - v[1] + 1);
            }else{
                result += (v[1] - v[0] + 1);
            };
        }else if (dem == 2) {
            result += 1 + tham_So;
        }else if (dem == 3) {
            result += 3;
        }else{
            if (a > b && a > c) {
                result = a - (b + c - 1);
            }else if (b > a && b > c) {
                result = b - (a + c - 1);
            }else if (c > a && c > b) {
                result = c - (a + b - 1);
            };

        };
        cout << "Ket qua la: " << result << endl;
    };
    system("pause");
    return 0;
}