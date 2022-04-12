/* Tiến tặng crush kẹo nhưng crush không thích, đòi bánh kem cơ, mà phải bánh kem nhiều tầng. Biết giá của 1 chiếc bánh kem tính như sau: tầng 1 giá 1 xu, tầng 2 giá 2 xu... tầng N giá N xu. Tiến nhận thấy mình chỉ còn K xu, hãy tính xem chiếc bánh kem to nhất Tiến có thể mua có bao nhiêu tầng 
Vd: 	Input: 60 
Out: 10
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;cin>>n;
    int sum =0;
    int tang = 0;
    
    for(int i = 1; i <=n; i++){
        sum +=i;
        if(sum > n) break;
        tang++;
    }
    cout<<tang; 


    return 0;
}