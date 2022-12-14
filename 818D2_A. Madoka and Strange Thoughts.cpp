
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   ll n;
   cin>>n;
   ll  ans=0 ;
   ans = n;
   ans += n/2*2;
   ans += n/3*2;
   cout<<ans<<nn;
}


int main()
{
    fastio();
    int t;
    cin>>t;
    while(t--) {
    solve();
}
return 0;
}

