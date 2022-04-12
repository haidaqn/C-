/* #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
const int maxn = (int)1e6;
const int MOD = 1000000007;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    ll sum = 0;
    for (int &x : a)
    {
        cin >> x;
        sum += x;
    }
    sort(a, a + n);
    int Max = *max_element(a, a + n);
    if (sum % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (Max > sum - Max)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
} */

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;cin>>n;
    vector<long long> v(n);
    long long sum =0;
    for(long long &x:v) cin>>x;
    sort(v.begin(), v.end());
    for(long long x: v) sum+=x;
    if(sum % 2 == 1){
        cout<<"NO";
    }
    else {
        if(v[n-1] >  sum - v[n-1] ) cout<<"NO";
        else cout<<"YES";
    }

    return 0;
}