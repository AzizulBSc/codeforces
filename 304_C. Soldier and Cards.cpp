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
 IN1(n);
 IN1(k1);
 ll x,count=0;
 deque<ll>p1,p2;
 for(ll i =0;i<k1;i++){
    cin>>x;
    p1.push_back(x);
 }
 IN1(k2);
 for(ll i =0;i<k2;i++){
   cin>>x;
   p2.push_back(x);
 }
 while(++count){
 if(count>100000){
    cout<<"-1"<<nl;return;
 }

 if(p1.empty()){
    cout<<count-1<<' '<<2<<nl;return;
 }
 if(p2.empty()){
    cout<<count-1<<' '<<1<<nl;return;
 }
 ll temp1 = p1.front();p1.pop_front();
 ll temp2 = p2.front();p2.pop_front();
 if(temp1>temp2){
    p1.push_back(temp2);
    p1.push_back(temp1);
 }
 if(temp2>temp1){
    p2.push_back(temp1);
    p2.push_back(temp2);
 }
 }

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



