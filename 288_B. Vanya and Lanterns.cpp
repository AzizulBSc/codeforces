#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve(){
  ll n,l,point;
  cin>>n>>l;
  vector<ll> points(n);
  for(ll int i = 0;i<n;i++){
     cin>>point;
     points[i] = point;
  }
  sort(points.begin(),points.end());
  double max_def = 0;
  double min_radius = 0;
  double temp = 0;
  for(ll i = 0;i<n;i++){
    if(i==0){
        min_radius = points[i];
    }
    if(i==n-1){
        if(min_radius<(l-points[n-1])){
            min_radius = l - points[n-1];
        }
    }
    else{
        temp = abs(points[i]-points[i+1]);
        if(temp>max_def){
            max_def = temp;
            if(max_def/2>min_radius){
                min_radius = max_def/2;
            }
        }
    }
  }
  cout<<fixed<<setprecision(10)<<min_radius<<nn;

}

int main()
{
    fastio();
    int t;
    //cin>>t;
    t = 1;
    while(t--){
        solve();
    }

    return 0;
}

