
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
   map<ll,vector<ll>> mp
   IN1(n);
   ll a;
   for(ll i = 0;i<n;i++){
    cin>>a;
    mp[a].push_back(i);
   }
   vector<pll> res;
   for(auto &it:mp){
     if(it.second.size()==1){
        res.push_back({it.first,0});
        continue;
     }
     else{
        ll d = it.second[1] -it.second[0];
        int flag = 1;
        for(ll i=2;i<it.second.size();i++){
            if(d!=it.second[i]-it.second[i-1]){
                flag = 0;
                break;
            }
        }
        if(flag){
            res.push_back({it.first,d});
        }
     }
   }
   cout<<res.size()<<nn;
   for(auto it:res){
    cout<<it.first<<' '<<it.second<<nn;
   }

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

