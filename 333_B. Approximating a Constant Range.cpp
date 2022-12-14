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

void solve()
{
    int n; cin >> n;
  vector<int> arr(n);
  for (int& x: arr) cin >> x;
  int ans = 1;
  multiset<int> s;
  s.insert(arr[0]);
  for (int i = 0, j = 1; i < n; i++) {
    int mn = *s.begin(), mx = *s.rbegin();
    while (j < n && max(mx, arr[j]) - min(mn, arr[j]) <= 1) {
      s.insert(arr[j]);
      mx = max(mx, arr[j]);
      mn = min(mn, arr[j]);
      j++;
    }
    ans = max(ans, j - i);
    s.erase(s.find(arr[i]));
  }
  cout << ans << endl;
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


