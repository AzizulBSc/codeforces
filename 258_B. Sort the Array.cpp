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
    IN1(n);
    vector<ll> arr(n);
    ll index1=0,index2=0;
    VIN(arr);
    for(ll i = 1;i<n;i++){
             if(arr[i]<arr[i-1]){
                index1 = i-1;
                break;
        }

           }
            for(ll i = n-1;i>0;i--){
             if(arr[i]<arr[i-1]){
                index2 = i;
                break;
        }

           }
           reverse(arr.begin()+index1,arr.begin()+index2+1);
           for(ll i = 1;i<n;i++){
            if(arr[i]<arr[i-1]){
                no;
                return;
            }
           }
                yes;
                cout<<index1+1<<' '<<index2+1<<nn;
                return ;
            }
int main() {
    fastio();
    ll t=1;
   // cin>>t;
    while(t--){
        solve();
    }
	return 0;
}
