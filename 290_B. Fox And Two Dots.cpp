#include <bits/stdc++.h>
using namespace std;
#define     ll      long long
#define     ld      long double
#define     ss      string
#define     nn      "\n"
#define     nl      cout<<"\n"
#define     yes     cout<<"YES"<<nn
#define     no      cout<<"NO"<<nn
#define     MOD     1000000007
#define     pll     pair<ll,ll>
#define     For(i,x,n)  for(ll i =x;i<n;i++)
#define     IN1(x);     ll x;cin>>x;
#define     IN2(x,y);   ll x,y;cin>>x>>y;
#define     IN3(x,y,z); ll x,y,z;cin>>x>>y>>z;
#define     VIN(v);     for(ll i = 0;i<v.size();i++) cin>>v[i];
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";

int color[50][50];
pair <int, int> p[50][50];
char c[50][50];
int n, m;

bool dfs(int i, int j)
{
    color[i][j]++;
    bool res = false;
    if (i > 0)
    {
        if (p[i][j] != make_pair(i - 1, j))
            if (c[i - 1][j] == c[i][j])
            {
                if (color[i - 1][j] == 1)
                    res = true;
                else
                    if (color[i - 1][j] == 0)
                        p[i - 1][j] = make_pair(i, j), res |= dfs(i - 1, j);
            }
    }
    if (i < n)
    {
        if (p[i][j] != make_pair(i + 1, j))
        if (c[i + 1][j] == c[i][j])
        {
        if (color[i + 1][j] == 1)
            res = true;
        else
            if (color[i + 1][j] == 0)
                p[i + 1][j] = make_pair(i, j), res |= dfs(i + 1, j);
        }
    }
    if (j > 0)
    {
        if (p[i][j] != make_pair(i, j - 1))
        if (c[i][j - 1] == c[i][j])
        {
        if (color[i][j - 1] == 1)
            res = true;
        else
            if (color[i][j - 1] == 0)
                p[i][j - 1] = make_pair(i, j), res |= dfs(i, j - 1);
        }
    }
    if (j < m)
    {
        if (p[i][j] != make_pair(i, j + 1))
        if (c[i][j + 1] == c[i][j])
        {
            if (color[i][j + 1] == 1)
                res = true;
            else
                if (color[i][j + 1] == 0)
                    p[i][j + 1] = make_pair(i, j), res |= dfs(i, j + 1);
        }
    }
    color[i][j]++;
    return res;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> c[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            p[i][j] = make_pair(-10, -10);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (color[i][j] == 0)
                if (dfs(i, j))
                {
                    cout << "Yes";
                    return ;
                }
    cout << "No";
    return;
}
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
   freopen ( "input.txt", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
#endif

    ll t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }

    printclock
    cout.flush();
    return 0;
}


