#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
 
        int n;
        priority_queue<long long, vector<long long>, greater<long long>> ok; //heap-sort
    
        cin >> n;
        for (int i = 1, a; i <= n; ++i){
            cin >> a;
   	        ok.push(a);
        }
 
        long long sum = 0, t1, t2;

        while (ok.size() > 1){

            t1 = ok.top(); ok.pop();
   	        t2 = ok.top(); ok.pop();    

   	        sum += t1 + t2;
            sum%=1000000007;

   	        ok.push(t1 + t2);
        }
 
        cout << sum << endl;
    }

    return 0;
} 
} 