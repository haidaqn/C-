#include <bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)

int n,k,s,ans=0;
int x[100];
int a[21];
 
void inp(){
	cin>>n>>k>>s;
	FOR(i,1,n+1) a[i]=i;
}

void ql(int pos,int cnt,int sum){
	if(cnt==k && sum==s){
		++ans;
		return;
	}
	for(int j=pos;j<=n;j++){
		if(a[j]+sum<=s){
			x[cnt]=a[j];
			ql(j+1,cnt+1,sum+a[j]);
		}
	}
}
 
int main(){
	while(true){
		inp();
		if(n==0 && k==0 && s==0){
			break;
		}
		ans=0;
		ql(1,0,0);
		cout<<ans<<"\n";
	}
}