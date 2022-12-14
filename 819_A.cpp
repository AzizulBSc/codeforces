#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll  n;
    cin>>n;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    ll ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[0]) ans = max(ans,arr[i]-arr[0]);
    }
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]) ans = max(ans,arr[i-1]-arr[i]);
    }
    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[n-1]) ans = max(ans,arr[n-1]-arr[i]);
    }
    cout<<ans<<endl;

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

