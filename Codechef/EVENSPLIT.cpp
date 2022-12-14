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
    IN1(n);
    string s;
    cin>>s;
    vector<char> vec1,vec0,ans;
    for(ll i = 0;i<n;i++){
        if(s[i]=='0') vec0.push_back('0');
        else vec1.push_back('1');
    }
    if(s.size()==2) cout<<s;
    ///merge(vec0.begin(),vec0.end(),vec1.begin(),vec1.end(),ans.begin());
    else
    {
    for(ll i = 0;i<vec0.size();i++) cout<<vec0[i];
    for(ll i = 0;i<vec1.size();i++) cout<<vec1[i];
    }
    cout<<nn;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
