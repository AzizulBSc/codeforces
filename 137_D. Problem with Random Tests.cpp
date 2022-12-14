
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

string get(string s,string t){
	reverse(s.begin(),s.end());
	reverse(t.begin(),t.end());
	string ret(s.size(),'0');
	for(ll i =0;i<s.size();i++){
		if(s[i]=='1')ret[i] = '1';
		if(i<t.size()&&t[i]=='1')ret[i] = '1';
	}
	reverse(ret.begin(),ret.end());
	return ret;
}
void solve()
{
   int n;
	cin>>n;
	string s;
	cin>>s;
	reverse(s.begin(),s.end());
	while(s.size()>0 && s.back()=='0')s.pop_back();
	reverse(s.begin(),s.end());
	n = s.size();

	if(n==0){
		cout<<0<<endl;
		return;
	}

	string ans = s;
	int m = n;
  for(ll i = 0;i<n;i++){
		if(s[i]=='1')m--;
		else break;
	}

	for(ll i = 0;i<n;i++){
		if(i+m>n)break;
		ans = max(ans,get(s,s.substr(i,m)));
	}
	cout<<ans<<endl;

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





