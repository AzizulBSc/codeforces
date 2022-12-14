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
ll xa,ya,xb,yb,n;
pll a[1111];
ll r[1111];
inline bool check(int x,int y) {
  for(int i = 0; i < n; ++i) {
    int dst = (x - a[i].first) * (x - a[i].first) + (y - a[i].second) * (y - a[i].second);
    if (dst <= r[i] * r[i]) return 1;
  }
  return 0;
}
void solve(){
   cin>>xa>>ya>>xb>>yb;
   if(xa>xb) swap(xa,xb);
   if(ya>yb) swap(ya,yb);
   cin>>n;
    for(ll i = 0;i<n;i++){
        cin>>a[i].first>>a[i].second>>r[i];
    }
    int res = 0;
    for(ll dx=xa;dx<=xb;++dx){
        for(ll dy = ya;dy<=yb;++dy){
            if(dx==xa||dx==xb||dy ==ya||dy==yb){
                if(!check(dx,dy)){
                    ++res;
                }
            }
        }
    }
    cout<<res<<nn;
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
