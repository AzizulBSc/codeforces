#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
void solve()
{
    int n,m,l=0;
    cin>>n>>m;
    char x='a';
    for(int i=1; i<=n; i++)
    {
        if(l==m)
            l=0;
        if(l<m)
        {
            cout<<char(x+l);
            l++;
        }
    }
}
    int main()
    {
        solve();
        return 0;
    }
