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
 set<ll> num ;
 for(ll i = 0;i<x-1;i++){
     for(ll j = j+1;j<x;j++){
         if(ground[i]>ground[j]||water[i]>water[j]){
             num.insert(i+1);
         }
         else{
             num.insert(j+1);
         }
     }
 }
 cout<<num.size()<<nn;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
