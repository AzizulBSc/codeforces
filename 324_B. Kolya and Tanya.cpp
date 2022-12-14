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
  string s;
cin>>s;
ll n=s.size();
if(n<26)
{
    cout<<-1<<endl;
    return;
}
set<char> st;
for(ll i='A';i<='Z';i++)
{
    st.insert(i);
}
ll count=0;
ll flag=0;
for(ll i=0;i<n-25;i++)
{
    count=0;
    set<char> temp=st;
    for(ll j=i;j<i+26;j++)
    {
        if(s[j]=='?')
        count++;
        else
        {
            temp.erase(s[j]);
        }
    }
    if(temp.size()==count)
    {
        flag++;
        for(ll j=i;j<i+26;j++)
        {
            if(s[j]=='?')
            {
                s[j]=*temp.begin();
                temp.erase(temp.begin());
            }
        }
        break;
    }
}
for(auto &val:s)
{
    if(val=='?')
    val='A';
}
if(flag)
cout<<s<<endl;
else
cout<<"-1"<<endl;
}

int main (){
    IOS;
    #ifndef ONLINE_JUDGE
    freopen ( "input.txt", "r", stdin );
    freopen ( "output.txt", "w", stdout );
    #endif

    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    printclock
    cout.flush();
      return 0;
}
