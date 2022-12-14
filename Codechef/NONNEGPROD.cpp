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
ll x,count=0,flag=1;
for(ll i = 0;i<n;i++){
    cin>>x;
    if(x==0) flag = 0;
    if(x<0) count++;
}
if(count%2==0||flag==0)cout<<0<<nn;
else cout<<1<<nn;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
