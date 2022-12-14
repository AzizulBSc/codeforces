#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define pll pair<ll,ll>
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio(); ios::sync_with_stdio(false);cin.tie(NULL);
void solve(){
string s;
cin>>s;
ll res = 0;
string a = "bear";
for(ll i = 0;i<s.size();i++){
    for(ll j = i,k=0;j<s.size();j++){
        if(k<4){
            if(s[j]==a[k]) k++;
            else if(s[j]==a[0]) k=1;
            else k = 0;
        }
        if(k==4) res++;
    }
}
cout<<res<<nn;

}

int main(){
    fastio();
   // input;
    //output;
    ll t=1;
   // cin>>t;
    while(t--){
       solve();
    }
    cout.flush();
    return 0;
}
