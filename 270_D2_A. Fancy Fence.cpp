#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   int t;
   cin>>t;
   int angle;
   while(t--){
    cin>>angle;
    if((360%(180-angle))==0)
         cout<<"YES"<<nn;
    else
       cout<<"NO"<<nn;
   }
}

int main()
{
    fastio();
    solve();
    return 0;
}


