
#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
void solve()
{
    ll n,k,ans=1;
    cin>>n>>k;
    while((n*ans-k)%10 !=0 && (n*ans)%10 !=0){
        ans++;
    }

    cout<<ans<<"\n";
}
int main()
{
    fastio();
    solve();
    return 0 ;
}

