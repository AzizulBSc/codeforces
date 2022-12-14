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
ll LCS(string a,string b){
    ll ans = 0;
    map<char,ll> A,B;
   for(auto it:a) A[it]++;
   for(auto it:b) B[it]++;
   for(char i='a';i<='z';++i)
      ans=max(ans,min(A[i],B[i]));
   return ans;
}
void solve(){
IN1(n);
string a,b;
cin>>a>>b;
ll ans = LCS(a,b);
cout<<ans<<nn;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
