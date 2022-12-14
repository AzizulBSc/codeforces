
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    double n,m,a;
    cin>>n>>m>>a;
    ll result = ceil(n/a) * ceil(m/a);
    cout<<result<<nn;

}


int main()
{
    fastio();
    solve();
    return 0;
}

