
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

map<int,int> m;
vector<ll>a;
bool good(int s){
    vector<ll> b=a;
    int ss=s;
    int j=b.size()-1;
    for(j;j>=0;j--){
        if(b[j]<=ss){
            ss--;
            if(ss==0) break;
        }
    }
    return j>=s-1&&!ss;
}
void solve(){
    int n;
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
        m[x]++;
    }
    sort(a.begin(),a.end());
    int l=0,r=m[1]+1;
    while(l+1<r){
        int s=(l+r)>>1;

        if(good(s)){
            l=s;
        }else r=s;
    }
    cout<<l<<nl;

}
int main ()
{
    fastio;
#ifndef ONLINE_JUDGE
    //freopen ( "input.txt", "r", stdin );
   // freopen ( "output.txt", "w", stdout );
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





