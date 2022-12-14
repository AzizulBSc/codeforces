
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll  result = 0;
    priority_queue <ll> que;
    for(int i = 0; i<n; i++)
    {
        ll l = i, r = n-i-1;
        ll mx = 0;
        if(s[i]=='L')
        {
            result += l;
            mx = max(mx,r-l);
        }
        else
        {
            result += r;
            mx = max(mx,l-r);
        }
        que.push(mx);
    }
    for(ll i = 0; i<n; i++)
    {
        result += que.top();
        que.pop();
        cout<<result<<" ";
    }
    cout<<nn;
}

int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

