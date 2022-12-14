#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define For(i,n) for(ll i = 0;i<n;i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

ll solve(){
    IN2(n,m);
    vector<ll> candies(n);
    VIN(candies);
    ll sum = 0;
    For(i,n){
        sum += candies[i];
    }
    return sum%m;
}


int main()
{
    fastio();
    int t=1,j=1;
    ll restCanidies;
    cin>>t;
    while(t--)
    {
       restCanidies =  solve();
       cout<<"Case #"<<j++<<": "<<restCanidies<<nn;
    }

    return 0;
}
