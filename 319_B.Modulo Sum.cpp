#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,x,n) for(ll i = x;i<n;i++)
#define IN2(x,y) ll x,y;cin>>x>>y;
#define yes cout<<"YES"
#define no cout<<"NO"
ll dp[1005][1005][2];
bool rec(ll i,ll md, bool start, vector<ll> &b){
    if(md==0&&start) return 1;
    if(i==b.size()) return 0;
    if(dp[i][md][start]!=-1) return dp[i][md][start];
    bool res = 0;
    for(ll j=1;j<=b[i];j++){
        res |= rec(i+1,(md+j*i)%((ll)b.size()),1,b);
        if(res) return dp[i][md][start] = res;
    }
    res |= rec(i+1,md,start,b);
    return dp[i][md][start] = res;
}
void solve(){
    IN2(n,m);
vector<ll> a(n);
vector<ll> b(m,0);
For(i,0,n){
    cin>>a[i];
    b[a[i]%m]++;
}
if(b[0]>0) yes;
else{
    memset(dp,-1,sizeof dp);
    bool res = rec(0,0,0,b);
    if(res) yes;
    else no;
}
}
int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
