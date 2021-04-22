#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[51];
    int n,t,c=0;
    cin>>n;
    cin>>s;
     t = n-1;
    for(int i = 0;i<n-1;i++)
    {
       if( s[i]==s[i+1])
       {
           c++;
       }
       else if( s[i]!=s[i+1])
       {
           t--;
       }
    }

    if(c==(n-1)||c>0)
    cout<<c<<endl;
    else if(t==0)
    cout<<t<<endl;

}
