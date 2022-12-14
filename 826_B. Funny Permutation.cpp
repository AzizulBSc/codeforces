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
    IN1(n);
    vector<ll> ans;
    ll x = n/2;
    //ll y = x;
    if(n%2==0){
        for(ll i = n;i>=1;i--){
            ans.push_back(i);
        }
    }
    else if(n==3) ans.push_back(-1);
    else if(n%2==1){
           ans.push_back(n);
           ans.push_back(n-1);
           for(ll i = 1;i<n-1;i++) ans.push_back(i);
    }
    // ans print
    for(auto it: ans) cout<<it<<' ';
    nl;
}
a
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
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


