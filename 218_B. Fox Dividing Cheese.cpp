#include <bits/stdc++.h>
using namespace std;
#define     ll      long long
#define     ld      long double
#define     ss      string
#define     nn      "\n"
#define     nl      "\n"
#define     yes     cout<<"YES"<<nn
#define     no      cout<<"NO"<<nn
#define     MOD     1000000007
#define     pll     pair<ll,ll>
#define     For(i,x,n)  for(ll i=x;i<n;i++)
#define     IN1(x);     ll x;cin>>x;
#define     IN2(x,y);   ll x,y;cin>>x>>y;
#define     IN3(x,y,z); ll x,y,z;cin>>x>>y>>z;
#define     fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";

void solve()
{
    IN2(a,b);
    ll count2 = 0,count3 = 0,count5 = 0;
    while(a%2==0){
        a /= 2;
        count2++;
    }while(a%3==0){
        a /= 3;
        count3++;
    }while(a%5==0){
        a /= 5;
        count5++;
    }
 while(b%2==0){
        b /= 2;
        count2--;
    }while(b%3==0){
        b /= 3;
        count3--;
    }while(b%5==0){
        b/= 5;
        count5--;
    }
    if(a!=b)cout<<"-1"<<nl;
    else cout<<abs(count2)+abs(count3)+abs(count5)<<nl;
}
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
#endif

    ll t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }

    printclock
    cout.flush();
    return 0;
}



