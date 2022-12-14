#include<bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"yes"<<nn
#define no cout<<"no"<<nn
#define For(i,n) for(ll i =0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

double binarySearch(vector <pair<char, double>> v, ll l, ll r, char c)
{
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first == tolower(c))
			return v[i].second;
	}
	return -1;
}
void solve()
{
    ll n, m, x, q;
    cin >> n >> m >> x;
    int xS, yS;
    bool qq = false;
    vector<string> key(n);
    vector<pair<int, int>> S;
    for (int i = 0; i < n; i++)
    {
        cin >> key[i];
        for (int j = 0; j < key[i].length(); j++)
        {
            if (key[i][j] == 'S')
            {
                xS = i;
                yS = j;
                S.push_back(make_pair(xS, yS));
            }

        }
    }
    cin >> q;
    vector<pair<char, double>> f;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            double minDis=INT_MAX;
            for (int e = 0; e < S.size(); e++)
            {
                if (minDis > sqrt(pow(i - S[e].first, 2) + pow(j - S[e].second, 2)))
                {
                    minDis = sqrt(pow(i - S[e].first, 2) + pow(j - S[e].second, 2));
                }
            }
            f.push_back(make_pair(key[i][j], minDis));
        }
    }
    sort(f.begin(), f.end());
    char c;
    ll count = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> c;
        double idk = binarySearch(f, 0, f.size(), c);
        if (c >= 'A' && c < 'a')
        {
            if (S.size() == 0)
                count = -1;
            else if (idk > x)
                count++;
        }
        if (idk == -1)
            count = -1;
        if (count == -1)
            break;
    }
    cout << count;

}
int main()
{
    fastio();
    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

