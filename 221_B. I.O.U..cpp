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
    IN2(n,m);
    if(m==0){cout<<0<<nn;return;}
     vector<ll> deb(n);
    ll a,b,c;
    for(ll i=0;i<m;i++){
            cin>>a>>b>>c;
            deb[--a] +=c;
            deb[--b] -=c;
    }
    int total_debt = 0;
    for(ll i = 0;i<n;i++){
        if(deb[i]>0)
            total_debt += deb[i];

    }
    cout<<total_debt<<nn;

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
