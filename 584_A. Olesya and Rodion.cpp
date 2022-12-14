#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "<<endl"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
 int n,t;
 cin>>n>>t;
 if(n==1&& t==10){
    cout<<"-1"<<endl;
 }
 else if(n>=2&&t==10){
        for(int i = 0;i<n-1;i++){
            cout<<1;
        }
        cout<<0<<endl;

 }
 else{
    for(int i =0;i<n;i++){
        cout<<t;
    }
    cout<<endl;
 }
}


int main()
{
    fastio();
    solve();
    return 0;
}

