#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define nl "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
IN2(a,b);
IN2(x,y);
float at = (float)a/(float)x;
float bt =(float) b/(float)y;
if(at<bt)cout<<"Chef"<<nl;
else if(bt<at) cout<<"Chefina"<<nl;
else if(bt==at) cout<<"Both"<<nl;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
