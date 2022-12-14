
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    cin>>n;
    int l = n;
    vector<int> a(n,0) ;
    for(int i = 0;i<n;i++){
        cin>>m;
        a[m]=1;
        while(a[l]==1){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
    }
    
}
int main()
{
    
    solve();

    return 0;
}
