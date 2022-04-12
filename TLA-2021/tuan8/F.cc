#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        long long arr[n];
        long long to_Tien[n];
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            arr[i] = pow(10, x);
            to_Tien[i] = 0;
        }
        if (n == 1) {
            cout << k+1 << endl;
        }else{
            if (k <= 8) {
                cout << k + 1 << endl;
            }else{
                long long result = 0;
                k = k + 1;
                for (int i = 1; i < n; i++) {
                    long long so_So_9 = (arr[i] / arr[i-1]) - 1;
                    if (so_So_9 > k) {
                        to_Tien[i - 1] += k;
                        k = 0;
                    }else{
                        to_Tien[i - 1] = so_So_9;
                        k -= so_So_9;
                    }
                    if (i == n - 1) {
                        to_Tien[i] = k;
                        break;
                    }
                    
                
                }

                for (int i = 0; i < n; i++) {
                    result += to_Tien[i] * arr[i];
                }
                cout << result << endl;
            }
        }
        
    }
    system("pause");
    return 0;
}