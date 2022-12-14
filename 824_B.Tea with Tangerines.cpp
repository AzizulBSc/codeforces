#include <bits/stdc++.h>
using namespace std;
#define     ll      long long
#define     ld      long double
#define     ss      string
#define     nn      "\n"
#define     nl      "\n"
#define     input   freopen("in.txt","r",stdin)
#define     output  freopen("output.txt","w",stdout)
#define     yes     cout<<"YES"<<nn
#define     no      cout<<"NO"<<nn
#define     MOD     1000000007
#define     pll     pair<ll,ll>
#define     For(i,x,n)  for(ll i =x;i<n;i++)
#define     IN1(x);     ll x;cin>>x;
#define     IN2(x,y);   ll x,y;cin>>x>>y;
#define     IN3(x,y,z); ll x,y,z;cin>>x>>y>>z;
#define     VIN(v);     for(ll i = 0;i<v.size();i++) cin>>v[i];
#define     IOS         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";

void solve(){
   IN1(n);
   ll x;
   vector<ll>pieces;
   For(i,0,n){
    cin>>x;
    pieces.push_back(x);
   }
   ll result = 0;
   if(n==1){
   result = 0;
   }
   else{
   ll temp1,temp2,temp3;
   sort(pieces.begin(),pieces.end());
   ll min = 2*pieces[0];
for(ll i=1;i<n;i++){
        temp1  = pieces[i]-2+min;
        temp2 = min-1;
        temp3 = temp1/temp2;
        if(temp3>=2){
            result  = result+temp3-1;
       }
   }
   }
   cout<<result<<nl;

 }

int main (){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    #endif

    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    printclock
    cout.flush();
      return 0;
}

