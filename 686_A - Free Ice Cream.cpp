#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nn "\n"
void solve ()
{
  ll n,x,distress=0;
  cin>>n>>x;
  for(ll i = 0;i<n;i++){
      char op;
      ll d;
      cin>>op>>d;
      if(op=='+'){
         x +=  d;
      }
      else{
          if(x<d){
              distress++;
          }
          else{
              x -= d;
          }
      }
  }
  cout<<x<<" "<<distress<<nn;
}

int main ()
{
  fastio()
  solve();
  return 0;
}
