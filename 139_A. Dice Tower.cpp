
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
   int n,face,face1,face2;
   cin>>n>>face;
   string flag = "YES";
   for(int i = 0;i<n;i++){
    cin>>face1>>face2;
    if(face==face1||face==face2||(abs(7-face1)==face)||(abs(7-face)==face1)||(abs(7-face2)==face)||(abs(7-face)==face2)){
        flag = "NO";
    }
   }
   cout<<flag<<nn;
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

