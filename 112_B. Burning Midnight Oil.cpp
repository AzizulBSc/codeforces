#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long l,r,m,n,k;
long long check(ll x)
{
	ll re=0;
	while(x)
	{
		re+=x;
		x/=k;
	}
	return re;
}

void solve()
{
	cin>>n>>k;
	l=0,r=1000000000LL;
	while(l<r)
	{
		m=l+r>>1;
		if(check(m)>=n)
			r=m;
		else
			l=m+1;
	}
	cout<<l;

}


int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--) {
    solve();
}
return 0;
}

