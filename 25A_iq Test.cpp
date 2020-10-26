#include<bits/stdc++.h>
using namespace std;
 main()
{
    int t,a[102],n,flag1=0,d1,flag2=0,d2;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n%2==1)
        {
            flag1++;d1=i;
        }
         else
        {
            flag2++; d2=i;
        }
        
    }
        if(flag1<=1)
            cout<<d1<<endl;
        else 
            cout<<d2<<endl;
   
}