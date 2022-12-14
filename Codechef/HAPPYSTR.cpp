#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define     printclock  cerr<<"Time : "<<1000*(ld)clock()/(ld)CLOCKS_PER_SEC<<"ms\n";
using namespace std;
bool isVowel(char a){
    if(a=='a')return true;
    if(a=='e')return true;
    if(a=='i')return true;
    if(a=='o')return true;
    if(a=='u')return true;
    else return false;
}
void solve(){
  string s;
  cin>>s;
  for(int i = 2;i<s.length();i++){
      if(isVowel(s[i])&&isVowel(s[i-1])&&isVowel(s[i-2])){
          cout<<"Happy"<<nn;return;
      }
  }
  cout<<"Sad"<<nn;
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    //printclock
	return 0;
}
