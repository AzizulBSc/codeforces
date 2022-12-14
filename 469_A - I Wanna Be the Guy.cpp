#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "<<endl"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n,p,q,x;
    cin>>n;
    cin>>p;
    set<ll> num;
    while(p--)
    {
        cin>>x;
        num.insert(x);
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        num.insert(x);
    }
    if(num.size()<n)
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    else
    {
        cout<<"I become the guy."<<endl;
    }
}


int main()
{
    fastio();
    solve();
    return 0;
}

