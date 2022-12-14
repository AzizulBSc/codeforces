#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j =0; j<n; j++)
        {
            if(a[i] == b[j])
            {
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    solve();
    return 0 ;
}

