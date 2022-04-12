#include <bits/stdc++.h>
using namespace std;


int main() {
    
    int n,p;
    cin>>n>>p;
    int a[n],all=0;
    for(auto& x:a) {
        cin>>x;
        all+=x;
    }
    sort(a,a+n);
    int t=1, res=0;
    for(t=1;t<=16384;t++){
        bitset<14>tmp=t;
        string s=tmp.to_string();
        int sum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            if(s[i]=='1' && a[i]!=0) {
                sum+=a[i];
                if(sum>1000) break;
                pq.push(i);
            }
        }
        if(sum!=1000) {
            while(!pq.empty()) pq.pop();
        }
        else{
            res+=p;
            all-=1000;
            while(!pq.empty()){
                a[pq.top()]=0;
                pq.pop();
            }
        }
    }
    cout<<res+all;
    
    return 0;
}