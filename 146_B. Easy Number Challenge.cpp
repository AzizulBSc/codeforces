
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
#define mx 1000010

ll d[mx];
void gen(){
    for(int i=1; i<mx; i++){
        for(int j=i; j<mx; j+=i) d[j]++;
    }
}

void solve(){
ll mod = 1073741824;
IN3(a,b,c);
ll sum = 0;
for(ll i = 1;i<=a;i++){
for(ll j = 1;j<=b;j++){
for(ll k = 1;k<=c;k++){
    sum = (sum + d[i*j*k])%mod;
}
}
}
cout<<sum<<nn;
}

int main(){
    fastio();
    gen();
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
