#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define For(i,n) for(ll i =0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
    IN1(n);
    vector<ll> arr(n) ;
    VIN(arr);
    ll count = 0;
    For(i,n){
        for(ll j = i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count +=1;
        }
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
