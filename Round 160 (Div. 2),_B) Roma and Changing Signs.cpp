#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ss string
#define nn "\n"
#define input freopen("in.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define pll pair<ll,ll>
#define For(i,x,n) for(ll i =x;i<n;i++)
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve(){
    int n,k;
	cin>>n>>k;
	int a[n];
	int sum=0,nc=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]<0) nc++;
	}
	if(k<nc){
	    for(int i=0;i<k;i++){
	        sum += abs(a[i]);
	    }
	    for(int i=k;i<n;i++){
	        sum += a[i];
	    }
	}
	else{
	    for(int i=0;i<n;i++){
	        a[i]=abs(a[i]);
	        sum += a[i];
	    }
	    sort(a,a+n);
	    k=k-nc;
	    if(k%2) sum -= 2*a[0];
	}
	cout<<sum<<endl;
}

int main(){
    fastio();
    //input;
    //output;
    ll t=1;
    //cin>>t;
    while(t--){
       solve();
    }
    return 0;
}
