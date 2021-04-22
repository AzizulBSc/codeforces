#include<bits/stdc++.h>
using namespace std;
main()
{
  long long  a[4];
  cin>>a[0];
  cin>>a[1];
  cin>>a[2];
  cin>>a[3];
  if(a[0]==a[1] && a[0]==a[2]&& a[0]==a[3])
  {
      cout<<3<<endl;
  }

  else{

  int count =0;
  for(int i =0;i<4;i++)
  {
        if(i>0)
      {

          for(int j=0;j<i;j++)
          {

           if(a[i]==a[j])
           {
              count++;
          }
        else
        {
            count = count;

         }
          }
      }


  }
  if(count==3) count--;
  cout<<count<<endl;

  }


}
