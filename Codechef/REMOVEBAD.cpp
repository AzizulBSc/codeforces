#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){

    IN1(n);
    ll a;
    map<ll,ll> mp;
       for(ll i =0;i<n;i++){
       cin>>a;
       mp[a]++;
       }
       ll mx =INT_MIN;
       for(auto it:mp){
           if(it.second>mx) mx=it.second;
       }
    cout<<n-mx<<nn;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
