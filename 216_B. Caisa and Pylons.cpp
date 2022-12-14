#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
 int n,h;
 cin>>n;
 int max = INT_MIN;
 for(int i = 0;i<n;i++){
    cin>>h;
    if(h>max){
        max = h;
    }
 }
 cout<<max<<nn;

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

