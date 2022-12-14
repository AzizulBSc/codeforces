#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nn "\n"
void solve ()
{
  string s;
  vector<char> vec ;
  getline(cin,s);
  for(ll i = 0;i<s.size();i++){
      if(s[i]=='+'){
        continue;
      }
      else{
          vec.push_back(s[i]);
      }
  }
   sort(vec.begin(), vec.end());
  for(ll i = 0 ;i<vec.size();i++){
      cout<<vec[i];
      if(i<vec.size()-1){
          cout<<"+";
      }
  }
  cout<<nn;
}

int main ()
{
  fastio()
  solve();
  return 0;
}
