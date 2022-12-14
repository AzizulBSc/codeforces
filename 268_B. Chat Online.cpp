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
IN2(p,q);
IN2(l,r);
vector<ll> a(p),b(p);
For(i,0,p){
    cin>>a[i]>>b[i];
}
ll c,d,x,y,count = 0,v[1004]={0};
For(i,0,q){
    cin>>c>>d;
    For(j,0,p){
        x = a[j]-d;
        y = b[j]-c;
        if(y<l||x>r) continue;
        For(k,max(x,l),min(y,r)+1){
           if(!v[k])
           {
               count++;
               v[k]=1;
           }
        }
    }

}
cout<<count<<nn;
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

