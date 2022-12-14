#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define For(i,n) for(ll i =0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve()
{
    IN1(x);
    vector<ll> segment;
    int a;
    for(int i = 0;i<x;i++){
        cin>>a;
        segment.push_back(a);
    }
    bool ans = false;
    sort(segment.begin(),segment.end());
    for(int i = 0;i<x-2;i++){
            int a = segment[i];
            int b = segment[i+1];
            int c = segment[i+2];
            if(a+b>c){
                ans = true;
                break;
            }
    }
    if(ans) yes;
    else no;


}
int main()
{
    fastio();
    ll t=1;
   // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


