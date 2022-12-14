#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    double a;
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>a;
        int ceil1 = ceil(a/2);
        int floor1 =floor(a/2);
        if(ceil1!=floor1&&flag==0){
            cout<<ceil1<<nn;
            flag = 1;
        }
        else if(ceil1!=floor1&&flag==1){
            cout<<floor1<<nn;
            flag = 0;
        }
        else{
            cout<<floor1<<nn;
        }
    }
}


int main()
{
    fastio();
    int t=1;
    while(t--) {
    solve();
}
return 0;
}

