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
    double vp,vd,t,f,c,distance,bijous=0;
    cin >> vp >> vd >> t >> f >> c;
    if(vp < vd){
        distance = vd * vp * t / (vd-vp);
        //cout << distance << '\\';
        while(distance<c){
            distance = vd * (distance + vp * (f + distance / vd)) / (vd-vp);
            //cout << distance << '\\';
            ++bijous;
        }
    }
    cout << bijous;

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

