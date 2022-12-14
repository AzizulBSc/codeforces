#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[102];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j =0;j<n;j++)
        {
            cin>>a[j];
        
        }
        for(int k =n-1;k>=0;k--)
        {
            if(k%2==1)
            cout<<(-1*a[k])<<" ";
            else
            cout<<(1*a[k])<<" ";
        
        }
        cout<<endl;
    }
}