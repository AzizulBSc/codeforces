#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   IN1(n);
   vector<ll> arr(n);
   set<ll> s;
   For(i,0,n) {
       cin>>arr[i];
       s.insert(arr[i]);

   }
   if(s.size()<3) yes;
   else if(s.size()>3) no;
   else{
       ll mid = *next(s.begin(),1);
       ll first = *next(s.begin(),0);
       ll last = *next(s.begin(),2);
       if(last-mid == mid-first)yes;
       else no;
   }
}
int main()
{
    //input;
    //output;
    fastio();
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

