
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
int arr[200005], brr[200005];
void solve(){
  int n;
  cin >> n;
  int cnta = 0, cntb = 0, cntdif = 0;
  for(int i = 1; i <= n; i++){
  	cin >> arr[i];
  	cnta += arr[i];
  }
  for(int i = 1; i <= n; i++){
  	cin >> brr[i];
  	cntdif += arr[i] != brr[i];
  	cntb += brr[i];
  }
  cout << min(abs(cnta - cntb) + 1, cntdif) << '\n';
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





