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
    IN2(x,y);
    char a[1002][1002];
    char s;
    set<ll>sss;
    bool flag = true;
    ll ans =INT_MIN;
    ll Gpos,Spos;
    for(ll i = 0;i<x;i++){
    for(ll j=0;j<y;j++){
        cin>>s;
        a[i][j] = s;
        if(s=='G'){
            Gpos = j;
        }
        if(s=='S'){
            Spos = j;
        }
    }
    if(Spos<Gpos) flag = false;
    else{
       sss.insert(Spos-Gpos);
    }
    }
    if(!flag) cout<<"-1"<<nn;
    else{
        cout<<sss.size()<<nn;
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

