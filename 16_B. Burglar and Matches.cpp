#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool compr(const pair<int ,int> &a,const pair<int ,int> &b){
    return a.second>b.second;
}
void solve()
{
   ll n,m;
   cin>>n>>m;
   vector<pair<int,int>> container(m);
   for( ll i = 0;i<m;i++){
     cin>>container[i].first>>container[i].second;
   }
   sort(container.begin(),container.end(),compr);
   ll sum = 0;
   for(ll i = 0;i<m;i++){
    if(n-container[i].first>0){
        n = n - container[i].first;
        sum += container[i].first*container[i].second;
    }
    else{
        sum += container[i].second * n;
        break;
    }
   }
   cout<<sum<<nn;

}

int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--) {
    solve();
}
return 0;
}

