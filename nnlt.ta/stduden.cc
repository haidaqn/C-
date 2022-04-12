#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
const int maxn = 1e5 + 5;
int n, m;
vector<int> adj[maxn];
int d[maxn];
bool visited[maxn];
int cnt = 0;

void dfs(int u)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            cnt++;
            dfs(v);
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    d[1] = 1;
    d[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        d[i] = ((d[i - 1] % mod) * (i % mod)) % mod;
    }
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    d[1] = 0;
    d[2] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cnt = 0;
            dfs(i);
            ans = ((ans % mod) + (d[cnt + 1] % mod)) % mod;
        }
    }
    cout << ans;
    return 0;
}