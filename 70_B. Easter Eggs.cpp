#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    string ans ="ROYGBIV";
    while(ans.size()<n){
        ans += ans[ans.size()-4];
    }
    cout<<ans<<nn;
}

int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

