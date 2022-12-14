#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define For(i,n) for(ll i=0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve()
{
    IN2(n,m);
    int a,b;
    vector<set<int>>tie(n+1);
    for(int i=0;i<m;i++){
        cin>>a>>b;
        tie[a].insert(b);
        tie[b].insert(a);
    }
    int groups = 0;
    while(1){
        vector<int> v;
        for(int i=1;i<n+1;i++){
        if(tie[i].size()==1)
            v.push_back(i);
        }
        for(int i = 0;i<(int)v.size();i++){
            set<int>::iterator it = tie [v[i]].begin();
            tie[v[i]].clear();
            tie[*it].erase(v[i]);
        }
        if(v.size()) groups++;
        else break;
    }
   cout<<groups<<nn;
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
