
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n;
    cin>>n;
    if(n==0)
        cout<<1<<nn;
   else if(n%4==0)
        cout<<6<<nn;
   else if(n%2==0 && n%4!=0)
        cout<<4<<nn;
    else if(n%4==1)
        cout<<8<<nn;
    else
        cout<<2<<nn;

}


int main()
{
    fastio();
    solve();
    return 0;
}

