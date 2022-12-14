#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nn "\n"
void solve ()
{
    ll i,j,n,m;
    ll ans;
    cin>>i>>j;
    if(i==1&&j==1){
        cout<<0<<nn;
    }
    else{
            if(i==j&&i%2==0){
                cout<<i+j+(i/2)*2-2<<nn;
            }
            else if(i==j&&i%2==1){
                cout<<i+j+(i/2)*2-1<<nn;
            }
            else if(i!=j){
                    if(min(i,j)%2==0){
                        cout<<i+j+(min(i,j)/2)*2-2<<nn;
                    }
                    else{
                        cout<<i+j+(min(i,j)/2)*2-1<<nn;
                    }

            }
    }
}

int main ()
{
    fastio()
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
