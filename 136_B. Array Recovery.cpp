#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define ld long double
#define nl cout << "\n"
#define nn "\n"
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define pll pair<ll,ll>
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio(); ios::sync_with_stdio(false);cin.tie(NULL);
#define printclock cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
void solve()
{
    IN1(n);
    ll x;
    vector<ll> d(n),a(n);

    for(ll i = 0; i<n; i++)
    {
        cin>>d[i];
    }
    bool multi = false;
        a[0] = d[0];
        ll currAdd,currSub,difSub,difAdd;
        for(ll i = 1; i<n; i++)
        {
            if(d[i]<a[i-1]&&d[i]!=0) { multi = true; break;}
            currAdd = a[i-1]+d[i];
            a[i] = currAdd;

        }
        if(multi==true) cout<<"-1"<<nn;
        else
        {
            for(auto it: a)cout<<it<<' ';
            cout<<nn;
        }

    }

    int main()
    {
        fastio();
        #ifndef ONLINE_JUDGE
        input;
        output;
        #endif
        ll t=1;
        cin>>t;
        while(t--)
        {
            solve();
        }
        printclock
        cout.flush();
        return 0;
    }

