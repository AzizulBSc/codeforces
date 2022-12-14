#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   int n,m;
   char x;
   cin>>n>>m;
   map<char ,int> color;
   color['C'] = 0;
   color['M'] = 0;
   color['Y'] = 0;
   color['W'] = 0;
   color['G'] = 0;
   color['B'] = 0;
   for(int i =0;i<n;i++){
    for(int j = 0;j<m;j++){
        cin>>x;
        color[x] +=1;
    }
   }
   if(color['M']>0||color['Y']>0||color['C']>0){
    cout<<"#Color"<<nn;
   }
   else{
    cout<<"#Black&White"<<nn;
   }
}


int main()
{
    fastio();
    solve();
    return 0;
}

