#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define mod 998244353
#define no cout<<"NO"<<nn
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll Mod_mul(ll a,ll b){
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll Mod_add(ll a,ll b){
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll pwr(ll a,ll b){
    a %= mod;
    ll ans = 1;
    while(b>0){
        if(b&1){
            ans = ans*a % mod;
        }
        a = a*a % mod;
         b >>= 1;
    }
    return ans;
}
void solve()
{
   IN2(a,b)
   ll x = pwr(2,a);
   ll y = pwr(2,b);
   cout<<Mod_mul(x,y)<<nn;


}
int main()
{
    //input;
    //output;
    fastio();
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

