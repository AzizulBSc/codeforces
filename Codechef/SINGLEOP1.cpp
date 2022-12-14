#include <bits/stdc++.h>
#define ll long long int
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
IN1(n);
string s; 
cin>>s;
ll max1 = 0,ones = 0;
for(ll i = 0;i<n;i++){
   if(s[i] == '1')ones++;else break ;
   //(ones>max1) max1 = ones;
   
}
cout<<ones<<nl;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
