#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505],col[300000];
main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
                col[a[i][j]]=i;
            }
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>b[i][j];
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<a[col[b[1][i]]][j]<<" ";
            }
            cout<<endl;
        }
    }
}