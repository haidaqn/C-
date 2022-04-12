#include <bits/stdc++.h>

using namespace std;

int main(){
    
    /* long long soduong, a, i = 1, sum =0;

    cin>>soduong;
    
    do{
        a = soduong % 2;
        sum = sum + i * a;
        soduong = soduong / 2;
        i = i * 10;
    }while(soduong > 0 );
    
    cout<<sum;
    
    return 0;  */
    int n;
    string result = "";
    cout << "Moi nhap so nguyen duong bat ki: "; cin >> n;
    while (true) {
        if (n % 2 == 0) {
            result = "0" + result;
            n = n / 2;
        }else if (n % 2 == 1){
            result = "1" + result;
            if (n == 1) {
                break;
            };
            n = (n-1) / 2;
        };
    };
    cout << "Ket qua la: " << result << endl;
    system("pause");
    return 0; 
} 

