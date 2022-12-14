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
 ll a,b;
	    cin>>a>>b;
	    ll p=0;
	    while(a%b==0 || b%a==0){
	        if(a==b){
	            p=1;
	            break;
	        }
	        else if(a>b){
	            a=a/b;
	        }
	        else if(b>a)
	        {
	            b=b/a;
	            
	        }
	    }
	    if(p==1) yes;
	    else no;
	}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
