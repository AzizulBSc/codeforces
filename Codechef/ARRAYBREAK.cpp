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
ll a,odd=0,even=0;
bool flag;
for(ll i =0;i<n;i++){
    cin>>a; 
    if(a==1);
    if(a%2==0) even++;
    else odd++;
}
flag = odd==0 or even==0? true:false;
if(flag) cout<<0<<nn;
else cout<<even<<nn;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
