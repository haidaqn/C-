#include <bits/stdc++.h>

#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define FOD(i, l, r) for(int i = l; i >= r; --i)

#define ll long long
#define ug unsigned long long

using namespace std;
ll 	n;

bool snt[1000100];

void seive(ll k)
{
	int e = sqrt(k);
	int i = 2;
	snt[1] = true;
	while (i <= e)
	{
		while (snt[i] == true) ++i;
		FOR(j, 2, (k / i)) snt[i*j] = true;
		++i;
	}
}	
int main()
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		cin >> n;
		seive(n);
		FOR(i, 2, n)
		{
			if (! snt[i]) cout << i << " ";
		}
	return 0;
}