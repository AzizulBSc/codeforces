#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)

void solve()
{
    ll n,c;
    cin>>n>>c;
    ll ans = 0,a;
    map<ll,ll> v;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        v[a]++;
    }
    for(auto &it:v)
    {
        if(c<it.second)
            ans += c;
        else
            ans += it.second;
    }
    cout<<ans<<nn;

}

int main()
{
    //input;
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
