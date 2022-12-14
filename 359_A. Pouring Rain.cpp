#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   double d,h,v,e;
    cin>>d>>h>>v>>e;
    v /= d*d*.7853981634;
    if(v>e){
         cout<<"YES"<<nn;
         cout<< h / (v - e)<<nn;
    }
    else
       cout<<"NO"<<nn;
   }

int main()
{
    fastio();
    solve();
    return 0;
}


