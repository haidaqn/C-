/* Thái rất đam mê hội hoạ nhưng dòng đời xô đẩy đưa Thái đến con đường làm Cốt đơ. Niềm đam mê hội hoạ vẫn đó nên Thái muốn viết code để in ra một hình chữ nhật với chiều dài và chiều rộng nhập từ bàn phím. Bởi Thái vẫn chưa biết quy luật để vẽ ra hình chữ nhật rỗng nên đành nhờ các bạn giúp.
Input: Nhập 2 số nguyên a, b là độ dài 2 cạnh. (2 < b ≤ a ≤ 100)
Output: Hình chữ nhật với độ dài tương ứng.
•	“* ” cho vị trí điền cạnh và 2 dấu cách “  ” cho khoảng trống
Input:			Output:
4 3			*  *  *  *
            *        *
   			*  *  *  *
 */
#include <iostream>

using namespace std;

int main(){

    int dong, cot;cin>>dong>>cot;

    for ( int i =1; i <= dong; i++) {
        for (int j =1; j <=cot; j++) {
            if ( i == 1 or i ==  dong or j == 1 or j == cot ) cout<<" * ";
            else cout<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}