#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"yes"<<nn
#define no cout<<"no"<<nn
#define For(i,n) for(ll i =0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve(){
    IN3(x,y,z);
    ll ed1 = abs(x-1);
    ll ed2_1 = abs(y-z);
    ll ed2_2 = abs(z-1);
    ll ed2 = ed2_1 + ed2_2;
    if(ed1<ed2) cout<<1<<nn;
    else if(ed2<ed1) cout<<2<<nn;
    else cout<<3<<nn;
            }
int main() {
    fastio();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
