#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
IN1(N);
string s;
cin>>s;
vector<char> num;
int plus=0;
int minus=0;
for(ll i = 0;i<N;i++){
    if(s[i]!='-'&&s[i]!='+'){
        num.push_back(s[i]);
    }
    else{
        if(s[i] =='+') plus++;
        else
        minus++;
    }
}
sort(num.begin(),num.end(),greater<char>());
ll t = num.size();
ll n = plus+minus;
string res="";
ll i = 0;
for(;i<t-n;i++){
      res += num[i];
    }
    
    while((plus--)>0){
        res +='+';
        res += num[i];
        i++;
    }
    while((minus--)>0){
        res += '-';
        res += num[i];
        i++;
    }
cout<<res<<nn;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
