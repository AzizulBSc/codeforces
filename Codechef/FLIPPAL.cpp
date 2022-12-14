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
    bool flag = false;
    ll ones=0,zeros = 0;
    IN1(n);string s;cin>>s;
    for(ll i = 0;i<n;i++){
        s[i]=='0'?zeros++:ones++;
    }
    if((n%2==1&&(zeros%2==1||ones%2==1))||(n%2==0&&zeros%2==0&&ones%2==0)) flag = true;
    else flag = false;
    flag?yes:no;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
