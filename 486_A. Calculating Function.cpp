
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n;
    cin>>n;
    if(n%2==1){
        cout<< -(n/2+1)<<nn;
    }
    else{
        cout<<n/2<<nn;
    }

}


int main()
{
    fastio();
    solve();
    return 0;
}

