#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll bigMod(ll b,ll p,ll m){
    ll u;
    if(p==0||b==1&&m>1) return 1;
    else if(m==1||b==0) return 0;
    else{
        if(p%2==0){
        u = bigMod(b,p/2,m);
        return (u*u)%m;
        }
        else{
            return ((b%m)*bigMod(b,p-1,m))%m;
        }
    }

}
void solve()
{
    ll b,p,m;
    while(cin>>b>>p>>m){
    cout<<bigMod(b,p,m)<<nn;

    }

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

