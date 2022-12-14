
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
    ll n,k,l,r,sall,sk;
    cin>>n>>k>>l>>r>>sall>>sk;
    vector<ll> sn;
    ll temp = sk/k;
    ll krem = sk%k;
    ll rs = sall-sk;
    n -= k;
    for(ll i = 1;i<=n;i++){
                if(i<=rs%n) sn.push_back(rs/n+1);
                else sn.push_back(rs/n);

        }
    for(ll i = 1;i<=k;i++){
        if(i<=krem) sn.push_back(temp+1);
        else sn.push_back(temp);
    }

    for(ll i = 0;i<sn.size();i++)
        cout<<sn[i]<<' ';

    cout<<nn;
    }

int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
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

