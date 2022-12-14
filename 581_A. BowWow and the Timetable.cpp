#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string s;
    cin>>s;
    ll ct = (s.size()-1)/2+1;
    if(s.size()%2==1){
        ll count = 0;
    for(ll i = 1;i<s.size();i++){
        if(s[i]=='1'){
            count++;
        }
    }
    if(count==0){
        ct--;
    }
    }
    cout<<ct<<nn;
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

