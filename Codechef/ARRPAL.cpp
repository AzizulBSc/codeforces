#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define nl "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
using namespace std;
void solve(){
IN1(n);
vector<int>a(n);
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }

 vector<int>c(n);
 vector<int>d(n);
         for(int i=0;i<n;i++)
         {
            c[i]=(a[n-i-1]-a[i]);
            
            d[i]=c[i];
         }
     sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
         if(d==c)
         {
             cout<<a[n-1]-a[0]<<endl;
         }
         else{
             cout<<-1<<endl;
         }
 
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
