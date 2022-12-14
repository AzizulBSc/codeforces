#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n;
    cin>>n;
    ll a,position[n];
    for(ll i = 0; i<n; i++)
    {
        cin>>a;
        position[a] = i;
    }
    ll m;
    cin>>m;
    ll b,cmp1=0,cmp2=0;
    for(ll i = 0; i<m; i++)
    {
        cin>>b;
        cmp1 += position[b]+1;
        cmp2 +=n-position[b];
    }
    cout<<cmp1<<" "<<cmp2<<nn;
}

int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

