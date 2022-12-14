#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define nl "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define SIN1(x);string x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
IN1(n);
SIN1(s);
list<char> a;
int j = n-1,k=0,m=0;
for(int i= 0;i<n;i++){
    // Alice turn
    if(k%2==0){
       if(s[m]=='0')
       a.push_front(s[m]);
       else a.push_back(s[m]);
       m++;
    } 
    //Bob Turn
    else{
        if(s[j]=='0')
       a.push_back(s[j]);
       else a.push_front(s[j]);
       j--;
    }
    k++;
}
for(char it:a)
{
 cout<<it;
}
cout<<nl;

}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
