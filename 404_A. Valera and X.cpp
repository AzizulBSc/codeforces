#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n;
    cin>>n;
    set<char> distinctChar1;
    set<char> distinctChar2;
    char xx[n][n];
    for(ll i = 0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            cin>>xx[i][j];
        }
    }

for(ll i = 0; i<n; i++)
{
    for(ll j=0; j<n; j++)
    {
        if (i == j || i + j == n - 1)
        {
            distinctChar1.insert(xx[i][j]);
        }
        else
        {
            distinctChar2.insert(xx[i][j]);
        }
    }
}

if(distinctChar1.size()==1 && distinctChar2.size()==1 && distinctChar1 != distinctChar2)
{
    cout<<"YES"<<nn;
}
else
{
    cout<<"NO"<<nn;

}


}


int main()
{
    fastio();
    solve();
    return 0;
}

