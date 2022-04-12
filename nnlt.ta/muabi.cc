#include <iostream>

using namespace std;

int main() {
    int n,m;cin>>n>>m;
    int a[m],b[m];
    for (int i=0;i<m;i++) cin>>a[i]>>b[i];
    for (int i=0;i<m;i++){
        int d=i;
        for (int j=i;j<m;j++)
        {   
            if (b[d]<b[j])
                d=j;
        }
        swap(b[d],b[i]);
        swap(a[d],a[i]);
    }
    bool check = true;
    int k = 0;
    int sum =0;
    while (check==true)
    {
        if ((k>m)||(n==0))
            check = false;
        if (n>=a[k])
        {
            sum = sum + a[k]*b[k];
            n = n - a[k];
        }
        else if (n<a[k])
        {
            sum = sum + n*b[k];
            n = 0;
        }
        k++;

    }
    cout << sum ;
}

