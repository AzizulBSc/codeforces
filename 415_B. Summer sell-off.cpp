#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define fastread() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define  pb push_back
#define fr(i,a,b) for(long long i=(a); i<(b); i++)
#define rf(i,a,b) for(long long i=(a); i>(b); i--)
#define vll vector<long long>

using namespace std;
int main(){
    fastread();
    ll n,f,k,l,i(0),sum(0); cin>>n>>f;
    vll v(n);
    fr(i,0,n){
        cin>>k>>l;
        sum+=min(k,l);
        if(k>=l) v[i]=0;
        else{
            v[i]=min(2*k,l)-min(k,l);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    while(f--){
        sum+=v[i];
        i++;
    }
    cout<<sum<<endl;
}
