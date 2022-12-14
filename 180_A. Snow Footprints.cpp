
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string str;
    int n;
    cin>>n>>str;
    int check1 = 0;
    int check2 = 0;
    int s = 0,t = 2000;
    for(ll i = 0;i<n;i++){
            if(str[i]=='L'&&check1==0){
                check1 = 1;
                t = i-1+1;
            }
            else if(str[i]=='.'&& check1==1){
                s = i-1+1;
                break;
            }
            if(str[i]=='R'&&check2==0){
                check2 = 1;
                s = i+1;
            }
            else if(str[i]=='L' && check2 ==1){
                t = i;
                break;
            }
            else if(str[i] == '.' &&check2 ==1){
                t = i+1;
                break;
            }
    }
    cout<<s<<' '<<t<<nn;
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

