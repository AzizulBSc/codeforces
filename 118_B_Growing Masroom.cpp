#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define pdi pair<double, int>
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool comp(pdi a, pdi b){
    if(a.first != b.first){
        return a.first > b.first;
    }
    else{
        return a.second < b.second;
    }
}
void solve()
{
    double n, t1, t2, k;
    cin>>n>>t1>>t2>>k;
    double a,b,x,y;
    k = 100-k;
    vector <pair<double, int>> ans;
    for(int i=0; i<n; ++i){
        cin>>x>>y;
        a = min(x,y);
        b = max(x,y);
 
        double res = max(a*t1*(k/100)+b*t2, b*t1*(k/100)+a*t2);
        ans.push_back({res, i});
    }
    sort(ans.begin(), ans.end(), comp);
 
    for(int i=0; i<(int)ans.size(); ++i){
        cout <<fixed <<setprecision(2)<< ans[i].second+1 << ' ' << ans[i].first <<'\n';
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

