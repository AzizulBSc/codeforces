#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a,b,c,x=0;
    cin>>n;
    for(int i = 0 ;i<n;i++)
    {
      cin>>a>>b>>c;
      if(((a==1)&&(b==1))||((b==1)&&(c==1))||((a==1)&&(c==1)))
      {
          x+=1;
      }
      else
      {
          continue;
      }
    }
    cout<<x<<endl;
}
