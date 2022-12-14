
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int t;
    cin>>t;
   while(t--)
    {
       int n;
       cin>>n;
       string s1,s2;
       cin>>s1>>s2;
       for(int i = 0;i<n;i++){
          if(s1[i]=='G'&&s2[i]=='B'){
            s2[i] = 'G';
          }
          else if(s2[i]=='G'&&s1[i]=='B'){
            s2[i] = 'B';
          }
       }
       int result = 1;
       for(int i = 0;i<n;i++){
        if(s1[i] != s2[i]){
            result = 0;
            break;
        }
       }
     if(result==1){
        cout<<"YES"<<nn;
     }
     else{
        cout<<"NO"<<nn;
     }
    }
}


int main()
{
    fastio();
    solve();
    return 0;
}

