#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define For(i,n) for(ll i =0;i<n;i++)
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
 IN1(x);
 vector<ll> ground(x),water(x);
 VIN(ground);
 VIN(water);
 ll max_strength = x-1;
 map<ll,ll> team_strength;
 for(ll i = 0;i<x-1;i++){
     for(ll j = i+1;j<x;j++){
         if(ground[i]>ground[j]){
             team_strength[i+1] +=1;
         }
         else{
              team_strength[j+1] +=1;
         }
         if(water[i]>water[j]){
             team_strength[i+1] +=1;
         }
         else{
              team_strength[j+1] +=1;
         }
     }
 }
 ll count = 0;
 for(ll i = 1;i<=x;i++){
    if(team_strength[i]>=max_strength){
        count += 1;
    }
 }
 cout<<count<<nn;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
