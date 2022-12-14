
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   ll l,r;
   cin>>l>>r;
   if(l%2){
    l++;
   }
   if(l+2>r){
    cout<<"-1"<<nn;
   }
   else{
      cout<<l<<' '<<l+1<<' '<<l+2<<nn;
   }

}


int main()
{
    fastio();
    solve();
    return 0;
}


