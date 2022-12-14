#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve(){

	ll n, m, xc, yc, cnt = 0;
	cin >> n >> m >> xc >> yc;
	int q; cin >> q;
	while (q--) {
		ll x, y; cin >> x >> y;
		ll dx = LLONG_MAX, dy = LLONG_MAX;
		if (x > 0) dx = (n - xc) / x;
		else if (x < 0) dx = (xc - 1) / (-1 * x);
		if (y > 0) dy = (m - yc) / y;
		else if (y < 0) dy = (yc - 1) / (-1 * y);
		ll mn = min(dx, dy);
		cnt += mn;
		xc += mn * x;
		yc += mn * y;
	}
	cout << cnt << endl;
}

int main()
{
fastio();
int t=1 ;
///cin>>t;
while(t--){
solve();
}


}
