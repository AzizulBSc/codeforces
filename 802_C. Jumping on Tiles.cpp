#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"yes"<<nn
#define no cout<<"no"<<nn
#define For(i,n) for(ll i =0;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve(){
   string s;
   ll D=0;
   map<char,vector<int>> arr;
   cin >> s;
   for(ll i=1;i<s.size()-1;++i)
      arr[s[i]].push_back(i+1);
   if(s[0]<s[s.size()-1]) {
      for(char i=s[0];i<=s[s.size()-1];++i)
         D+=arr[i].size();
      cout << s[s.size()-1]-s[0] << ' ' << D+2 << endl;
      cout << 1 << ' ';
      for(char i=s[0];i<=s[s.size()-1];++i)
         for(int j:arr[i])
            cout << j << ' ';
      cout << s.size() << endl;

   } else {
      for(char i=s[0];i>=s[s.size()-1];--i)
         D+=arr[i].size();
      cout << s[0]-s[s.size()-1] << ' ' << D+2 << endl;
      cout << 1 << ' ';
      for(char i=s[0];i>=s[s.size()-1];--i)
         for(ll j:arr[i])
            cout << j << ' ';
      cout << s.size() << endl;
   }

   }

int main() {
    fastio();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}

