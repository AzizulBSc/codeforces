#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define pll pair<ll,ll>
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
    IN1(n);
    ll p[n],h[n];
    ll l,ans = 0;
    for(ll i = 0;i<n;i++){
        cin>>p[i]>>h[i];

    }
    for(ll i = 0;i<n-1;i++){
        if(p[i]-h[i]>l || i ==0){
            ans++;
            l  = p[i];
        }
        else{
         if(p[i]+h[i]<p[i+1]){
             ans++;
             l = p[i] + h[i];
         } else{
             l = p[i];
         }
        }
    }
    ans++;
    cout<<ans<<nn;
}

int main()
{
   // input;
    //output;
    fastio();
    ll t=1;
   //cin>>t;
    for(ll i=1;i<=t;i++)
    {
        solve();
       // cout<<"Case #"<<i<<": "<<result<<nn;
    }
    return 0;
}


