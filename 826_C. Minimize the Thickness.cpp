#include <bits/stdc++.h>
using namespace std;
#define     ll      long long
#define     ld      long double
#define     ss      string
#define     nn      "\n"
#define     nl      cout<<"\n"
#define     yes     cout<<"YES"<<nn
#define     no      cout<<"NO"<<nn
#define     MOD     1000000007
#define     pll     pair<ll,ll>
#define     For(i,x,n)  for(ll i =x;i<n;i++)
#define     IN1(x);     ll x;cin>>x;
#define     IN2(x,y);   ll x,y;cin>>x>>y;
#define     IN3(x,y,z); ll x,y,z;cin>>x>>y>>z;
#define     VIN(v);     for(ll i = 0;i<v.size();i++) cin>>v[i];
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";

void solve()
{
     int n;cin>>n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int temp = 0,mini = n,count =0;
    for (int i = 0; i < n; ++i)
    {
        temp += a[i];
        count++;
        int temp_maxo=0;
        if(sum%temp == 0){
            temp_maxo = count;
            int temp_sum = 0,temp_count = 0;
            for (int j= i+1; j < n; ++j)
            {
                temp_sum += a[j];
                temp_count++;
                if(temp_sum == temp){
                    temp_maxo = max(temp_maxo,temp_count);
                    temp_sum=0;temp_count=0;
                }
            }
            if(temp_sum == 0){
                mini = min(mini,temp_maxo);
            }
        }
    }
    cout<<mini<<nn;
   }
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
   freopen ( "output.txt", "w", stdout );
#endif

    ll t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }

    printclock
    cout.flush();
    return 0;
}


