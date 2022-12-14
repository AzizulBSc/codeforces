
#include<bits/stdc++.h>
using  namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    ll  a[100010];
    bool flag1 = 1,flag2 = 1;
    for(ll i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i =0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            flag1 = 0;
        }
        if(!flag1 && a[i]<a[i+1])
        {
            flag2 = 0;
        }
    }
    if(flag2)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

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
