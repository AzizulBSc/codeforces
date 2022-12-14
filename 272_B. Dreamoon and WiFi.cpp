#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"yes"<<nn
#define no cout<<"no"<<nn
#define For(i,x,n) for(ll i=x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

string s1,s2;
int ys,nt;
void get(int count,int count1){
    if(count1==0){
        if(count==0) ys++;
        else nt++;
        return;
    }
    int ret,ret1;
    get(count+1,count1-1);
    get(count-1,count1-1);
    return;
}


void solve()
{
    getline(cin,s1);
    getline(cin,s2);
    int count = 0,count1=0;
    For(i,0,s1.size())
    {
        if(s1[i]=='+') count++;
        else count--;
    }
    For(i,0,s1.size())
    {
        if(s2[i]=='+')count--;
        else if(s2[i]=='-')count++;
        else count1++;
    }
    if(count==0&&count1==0) {cout<<"1.0000000000"<<nn;return;}
    count = -count;
    get(count,count1);
    double prob = (ys*1.0)/(nt+ys+0.0);
    cout<<setprecision(10)<<fixed<<prob<<nn;

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
