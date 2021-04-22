#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long  t ,s1,s2,k =1,r=1,c=0,n,m,x;
    cin>>t;
    for(unsigned long long v=0;v<t;v++)
 {
   cin>>n>>m>>x;
   k=1;r=1;
     for(unsigned long long int  i=1; i<=n;i++ )
        {
            k =i;
            for(unsigned long long int j=1;j<=m;j++)
            {

               if(k==x)
               {
                   s1=i;s2=j;
                   break;
               }
               k = k+n;
            }
        }

     for(unsigned long long int  i=1; i<=n;i++ )
        {
            for(unsigned long long int j=1;j<=m;j++)
            {
                if(s1==i&&s2==j)
                {
                    cout<<r<<endl;
                }
                r++;

            }

        }
 }

return 0;

    }
