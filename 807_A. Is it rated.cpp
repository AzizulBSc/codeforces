#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "<<endl"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   ll n,x,y,flag1=0,flag2 = 0;
   cin>>n;
   vector<ll> num;
   for(int i =0;i<n;i++){
    cin>>x>>y;
    num.push_back(x);
    if(abs(x-y)>0){
        flag1 = 1;
    }
   }
   if(flag1 == 1){
    cout<<"rated"<<endl;
   }
   else{
    for(int i =0;i<n-1;i++){
    for(int j =i+1;j<n;j++){
        if(num[i]<num[j]){
            flag2 = 1;
            break;
        }
    }

    }
    if(flag2==1){
        cout<<"unrated"<<endl;
    }
    else{
        cout<<"maybe"<<endl;
    }
   }
}


int main()
{
    fastio();
    solve();
    return 0;
}

