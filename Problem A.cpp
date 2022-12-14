#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,r,a[102];
    cin>>t;
    for(int i = 0 ; i<t; i++)
    {
        r = 0;
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {

            cin>>a[i];


        }
        sort(a,a+n);

        for(int i=0; i<n; i++)
        {
            r = r + a[i];
        }
        
        if( r==m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
