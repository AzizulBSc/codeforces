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
void solve()
{
    int n, m, k;
	cin >> n;
 int x[5000];
int y[5000];
int z[5000];
	for (size_t i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	cin >> m;
	for (size_t i = 0; i < m; i++)
	{
		cin >> y[i];
	}
	cin >> k;
	for (size_t i = 0; i < k; i++)
	{
		cin >> z[i];
	}
	double a, b;
	cin >> a >> b;
	sort(x, x + n);
	sort(y, y + m);
	sort(z, z + k);
	double first = (a / b) * (double(z[0]) / double(y[m-1]));

	double r2 = 0.00;
	r2 = double((x[n - 1]*x[n-1])) / (first + 1);


	cout << setprecision(12) <<fixed<< sqrt(r2) << endl;

}
int main()
{
    //input;
    //output;
    fastio();
    ll t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

