
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,count=0;
    cin>>n;
    vector<int> a(n) ;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0;i<n-1;i++){
        if(a[i]!=a[0]&&a[i]!=a[n-1])
        count++;
    }
    cout<<count<<endl;
    
}
int main()
{
    
    solve();

    return 0;
}
