
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

const int maxN = 5005;
ll dp[maxN];
    int p1;
    ll t1;
    int p2;
    ll t2;
    ll h;
    int s;
    cin >> p1 >> t1 >> p2 >> t2 >> h >> s;
    dp[0] = 0;
    for (int i = 1; i <= h; i++) {
        dp[i] = 1e18;
        for (int iter = 0; iter < 2; iter++) {
            for (int A = 0; A <= i; A++) {
                //before
                if (A * (p1 - s) >= i) {
                    dp[i] = min(dp[i], A * t1);
                }
                ll at_most = (A * t1 + t1);
                if (t2 > at_most) continue;
                at_most -= t2;
                at_most /= t2;
                if (at_most > h) at_most = h;
                ll his_hp = i - A * (p1 - s) - at_most * (p2 - s);
                his_hp -= (p1 + p2 - s);
                his_hp = max(his_hp, 0LL);
                dp[i] = min(dp[i], dp[his_hp] + (A * t1 + t1));
            }
            swap(t1, t2);
            swap(p1, p2);
        }
    }
    cout << dp[h];
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





