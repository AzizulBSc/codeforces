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
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve(){
    ll n;
    cin>>n;

    vector<ll>v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

              sort(v.begin(),v.end());

              ll mx = INT_MAX;

              for(ll i=1;i<n-1;i++){

                ll x = abs(v[i]-v[i-1])+abs(v[i]-v[i+1]);

                mx = min(mx,x);
              }

              cout<<mx<<endl;

}

int main(){
    fastio();
    input;
    //output;
    ll t=1;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}
