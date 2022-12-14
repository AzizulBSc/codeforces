#include<bits/stdc++.h>
using  namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
void solve()
{

    ll  n,k;
    cin>>n>>k;
    if(k%4==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(ll i = 1; i<n; i+=2)
        {
            if((i*(i+1)+(i+1)*k)%4==0)
                cout<<i<<" "<<i+1<<endl;
            else
                cout<<i+1<<" "<<i<<endl;

        }

    }
}
int main()
{
    fastio();
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;

}
