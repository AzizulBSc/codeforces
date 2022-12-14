#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,m;
    cin>>n>>m;
        if(n>m || (n%2==0 && m%2==1)) {
            cout<<"No"<<nn;
        }
        else {
            cout<<"Yes"<<nn;
            if(n%2==0) {
                for(ll i=1; i<=n-2; i++) cout<<"1 ";
                cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<nn;
            }
            else {
                for(ll i=1; i<n; i++) cout<<"1 ";
                cout<<m-n+1<<nn;
            }
        }

}

int main()
{
    fastio();
  // freopen("in.txt","r",stdin);
   //freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

