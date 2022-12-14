#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define printclock  cerr<<"Time : "<<1000*(ld)clock()/(l)CLOCKS_PER_SEC<<"ms\n";
using namespace std;
void solve(){
vector<string>s(3) ;
s[0] = "Setter";
s[1] = "Tester";
s[2] = "Editorialist";
IN3(x,y,z);
int mi = min(x,min(y,z));
int ma = max(x,max(y,z));
if(x==ma)cout<<s[0]<<nn;
else if(x==mi&&z==ma)cout<<s[2]<<nn;
else cout<<s[1]<<nn;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
   // printclock
	return 0;
}
