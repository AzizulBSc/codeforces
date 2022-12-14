#include <bits/stdc++.h>
using namespace std;
void
solve ()
{
  string s;
  set<char> letter;//use for distinct value;
  getline(cin, s);
  for(int i =0;i<s.size();i++){
      if(s[i]=='{'||s[i]=='}'||s[i]==','||s[i]==' '){
          continue;
      }
      else{
          letter.insert(s[i]);
      }
  }
  cout<<letter.size()<<endl;
}

int main ()
{
  solve();
  return 0;
}
