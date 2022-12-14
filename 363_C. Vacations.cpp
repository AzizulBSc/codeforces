#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define pll pair<ll,ll>
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
struct fabric
{
    string color;
    ll dur,id;
    /*sort(ada.begin(), ada.end(),[](fabric a,fabric b)->bool{
       return make_pair(a.color,a.id)<make_pair(b.color,b.id);
    });*/
};
void solve()
{
    IN1(n);
    ll a[1005],dp[1005][3];
    for(ll i = 1; i<=n; i++)
    {
        cin>>a[i];
    }
    for ( ll i = 1 ; i <= n ; i ++ )
    {

        dp[i][0] = max ( dp[i - 1][0], max ( dp[i - 1][1], dp[i - 1][2] ) ) ;

        if ( a[i] == 2 or a[i] == 3 ) dp[i][1] = max ( dp[i - 1][2], dp[i - 1][0] ) + 1 ;

        if ( a[i] == 1 or a[i] == 3 ) dp[i][2] = max ( dp[i - 1][1], dp[i - 1][0] ) + 1 ;

    }

    cout << n - max ( dp[n][0], max ( dp[n][2], dp[n][1] ) ) << endl ;
}
int main()
{
    //input;
    //output;
    fastio();
    ll t=1;
    // cin>>t;
    for(ll i=1; i<=t; i++)
    {
        solve();
        // cout<<"Case #"<<i<<": "<<result<<nn;
    }
    return 0;
}

