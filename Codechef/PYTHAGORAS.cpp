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
IN1(a);
ll b=0;
while(a%2==0){
    b++;a /=2;
}
if(b%2==1){b--;a *= 2;}
for(ll i = 0;i<=sqrt(a);i++){
    ll y = a -i*i,z=sqrt(y);
    if(z*z==y){
        cout<<(z<<(b/2))<<' '<<(i<<(b/2))<<nl;return;
    }
}
cout<<-1<<nl;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
