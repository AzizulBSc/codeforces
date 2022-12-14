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
#define fastio(); ios::sync_with_stdio(false);cin.tie(NULL);

void solve(){
    IN3(n,x0,y0);
    ll x[1001],y[1001];
    x[0]=x0;
    y[0] = y0;
    for(ll i = 1;i<=n;i++){
        cin>>x[i]>>y[i];
        x[i] -= x[0];
        y[i] -= y[0];
    }
    ll shoot =0;
    for(ll i = 1;i<=n;i++){
        bool flag = true;
        for(ll j= 1;j<i&&flag;j++){
            if(x[i]*y[j]==x[j]*y[i])
                flag = false;
        }
        if(flag) shoot++;
    }
    cout<<shoot<<nn;
}

int main(){
    fastio();
    //input;
    //output;
    ll t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    cout.flush();
    return 0;
}
