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
const ll N = 2 * 1e5 + 10;
vector<ll> power(N);
void solve() {
    ll n;
    cin >> n;
    ll p = 0;
    for (int x = 0; x < n; x++) {
        ll t;
        cin >> t;
        while (t % 2 == 0) {
            p++;
            t /= 2;
        }
    }
    ll  more = max(0LL, n - p);
    vector<ll> gar(n);
    for (ll x = 1; x <= n; x++) {
        gar[x - 1] = power[x];
    }
    sort(rbegin(gar), rend(gar));
    ll ans = 0;
    for (ll x = 0; x < n; x++) {
        if (more <= 0) {
            break;
        }
        ans++;
        more -= gar[x];
    }
    if (more > 0) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }
}
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
   freopen ( "input.txt", "r", stdin );
   freopen ( "output.txt", "w", stdout );
#endif
   for (int z = 1; z < N; z++) {
        int ct = 0;
        int x = z;
        while (x % 2 == 0) {
            ct++;
            x /= 2;
        }
        power[z] = ct;
   }
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





