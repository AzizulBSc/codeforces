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
    string s1,s2;
    cin>>s1>>s2;
    ll len1 = s1.length();
    ll len2 = s2.length();
    char c1 = s1[len1-1];
    char c2 = s2[len2-1];
    if(s1==s2)
        cout<<'='<<nn;
    else if(len1==1&&len2==1){
        if(s1>s2) cout<<'<'<<nn;
        else cout<<'>'<<nn;
    }
    else if(c1==c2){
        if(c1=='S'&&len1>len2) cout<<'<'<<nn;
        else if(c1=='S'&&len1<len2)cout<<'>'<<nn;
        else if(c1=='L'&&len1>len2) cout<<'>'<<nn;
        else if(c1=='L'&&len1<len2)cout<<'<'<<nn;
    }
    else if(c1>c2)cout<<'<'<<nn;
    else if(c1<c2) cout<<'>'<<nn;


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


