#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
using namespace std;
void solve(){
    double a,x,b,y;
    cin>>a>>x>>b>>y;
    double as = a/x;
    double bs = b/y;
    if(as>bs)
        cout<<"Alice"<<nn;
    else if(as<bs)
        cout<<"Bob"<<nn;
    else
       cout<<"Equal"<<nn;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
