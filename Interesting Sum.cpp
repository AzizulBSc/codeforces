#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
void solve()
{
    int n;
    cin>>n;
    vector<ll> vec(n) ;
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    cout<<((vec[n-1]-vec[1]) + (vec[n-2]-vec[0]))<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    solve();
    }
    return 0;
}
