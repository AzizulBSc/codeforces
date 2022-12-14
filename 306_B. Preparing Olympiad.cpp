#include <bits/stdc++.h>
using namespace std;
#define     ll      long long
#define     ld      long double
#define     ss      string
#define     nn      "\n"
#define     nl      cout<<"\n"
#define     input   freopen("in.txt","r",stdin)
#define     output  freopen("output.txt","w",stdout)
#define     yes     cout<<"YES"<<nn
#define     no      cout<<"NO"<<nn
#define     MOD     1000000007
#define     pll     pair<ll,ll>
#define     For(i,x,n)  for(ll i =x;i<n;i++)
#define     IN1(x);     ll x;cin>>x;
#define     IN2(x,y);   ll x,y;cin>>x>>y;
#define     IN3(x,y,z); ll x,y,z;cin>>x>>y>>z;
#define     VIN(v);     for(ll i = 0;i<v.size();i++) cin>>v[i];
#define     fastio         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";

void solve()
{
    IN2(n,l);
    IN2(r,x);
    int c[30];
    int mx,mn;
    int cnt,sum;
    int ans;
    for (int i=1; i<=n; i++)
        cin>>c[i];
    for (int i=1; i<(1<<n); i++)
    {
        cnt=sum=0;
        mx=0;
        mn=0x7fffffff;
        for (int j=1; j<=n; j++)
            if (i&(1<<(j-1)))
            {
                cnt++;
                sum+=c[j];
                mx=max(mx,c[j]);
                mn=min(mn,c[j]);
            }
        if (cnt<2)continue;
        if (sum>=l&&sum<=r&&mx-mn>=x)ans++;
    }
    cout<<ans<<nn;

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


