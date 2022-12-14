#include<bits/stdc++.h>
using  namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long

 int main(){
     fastio();
     ll T;
     cin>>T;
     while(T--){
        ll n;
   cin>>n;
   if(n==1){
    cout<<2<<endl;
    continue;
   }
   if(n%3==0){
    cout<<n/3<<endl;
    continue;
   }
   if(n%3==2||n%3==1){
    cout<<n/3 + 1<<endl;
    continue;
   }
     }
     return 0;
 }
