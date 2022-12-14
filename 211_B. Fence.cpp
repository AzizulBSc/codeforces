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
#define For(n) for(ll i = 0;i<n;i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;


void solve(){
    IN2(x,k);
    vector<ll> planks(x);
    planks[0] = 0;
    for(ll i = 1;i<=x;i++){
        cin>>planks[i];
        planks[i] +=planks[i-1];
    }
    ll min = INT_MAX,temp=0,index = 0;
    for(ll i = k;i<=x;i++){
        temp = planks[i]-planks[i-k];
        if(temp<min){
            min = temp;
            index  = i;
        }
    }
    cout<<index-k+1<<nn;



}


int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
