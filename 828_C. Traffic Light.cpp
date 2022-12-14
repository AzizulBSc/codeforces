#include <bits/stdc++.h>
using namespace std;
#define     ll      long long
#define     ld      long double
#define     ss      string
#define     nn      "\n"
#define     nl      "\n"
#define     yes     cout<<"YES"<<nn
#define     no      cout<<"NO"<<nn
#define     MOD     1000000007
#define     pll     pair<ll,ll>
#define     For(i,x,n)  for(ll i=x;i<n;i++)
#define     IN1(x);     ll x;cin>>x;
#define     IN2(x,y);   ll x,y;cin>>x>>y;
#define     IN3(x,y,z); ll x,y,z;cin>>x>>y>>z;
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";

void solve()
{
int n, i, ans = -1;
    char c;
    string s;
    vector<int> gidx;
    cin >> n >> c >> s;
    for (i = 0; i < n; i++)
        if(s[i]=='g')gidx.emplace_back(i);
    gidx.emplace_back(gidx[0]+n);
    for (i = 0; i < n; i++)
        if (s[i] == c)
        {
                int tmp=*lower_bound(gidx.begin(),gidx.end(),i);
                ans=max(ans,tmp-i);
        }
    cout << ans << '\n';

}
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
   freopen ( "input.txt", "r", stdin );
   // freopen ( "output.txt", "w", stdout );
#endif

    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }

    printclock
    cout.flush();
    return 0;
}





