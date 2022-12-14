
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,a,n) for(ll i = a; i < n; i++)
#define RFOR(i,a,n) for(ll i=n-1; i>=a; i--)
void input(vector<ll>&a)
{
    for(ll i=0; i<a.size(); i++)cin>>a[i];
}
void print(vector<ll>&a)
{
    for(ll i=0; i<a.size(); i++)cout<<a[i]<<" ";
    cout<<nn;
}

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n),b(n),aa(n),bb(n);
        input(a);
        input(b);
        ll l=-1;
        FOR(i,0,n)
        {
            if(l<i)
            {
                l++;
                FOR(j,i,n-1)
                {
                    l++;
                    if(b[j]>=a[j+1])continue;
                    else
                    {
                        l--;
                        break;
                    }
                }
            }
            aa[i]=b[l]-a[i];
        }
        RFOR(i,0,n)
        {
            auto it = lower_bound(b.begin(),b.end(),a[i]);
            ll x = it-b.begin();
            bb[i]=b[x]-a[i];
        }
        print(bb);
        print(aa);

    }
}


int main()
{
    fastio();
    solve();
    return 0;
}

