
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
    IN1(n);
    ll x;
    for(ll i=0;i<n;i++){
        cin>>x;
    }
     n = 10-n;
    if(n<2){
        cout<<0<<nl;
    }
    else{
        cout<<((n*(n-1))/2)*6<<nl;
    }
}
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





