#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,s=0,d=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=n-1,m=0,c=0,i=0;
    while(i<=j)
    {
         if(a[i]>=a[j])
             {
                 m = a[i] ;
                 i++;
             }
             else
             {
                 m = a[j];
                 j--;
             }
             if(c%2==0)
             {

             s +=m;
             }
             else
             {

             d += m;
             }

             c++;

    }
    cout<<s<<" "<<d<<endl;
}

