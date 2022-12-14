
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll ans(ll n,ll m, ll sx,ll sy,ll d)
{
    if((sy-d<=1 and sy+d>=m) or (sx-d<=1 and sx+d>=n) or (m-sy<=d and n-sx<=d) or (sy-d<=1 and sx-d<=1))
        return -1;
    else
        return n+m-2;

}

void solve()
{
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++)
    {
        ll n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        cout<<ans(n,m,sx,sy,d)<<nn;
    }

}


int main()
{
    fastio();
    solve();
    return 0;
}

