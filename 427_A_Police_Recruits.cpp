#include<bits/stdc++.h>
using namespace std;
main()
{

    int a,p=0;
    long long n,c=0;
    cin>>n;
    for(long  long i =0;i<n;i++)
    {
        cin>>a;
        if(a==-1)
        {
            if(p>0)
            {
                p -=1;
            }
            else if(p==0)
            {

            c++;
            }
        }
        else if(a>0)
        {
            p +=a;
        }
    }
  cout<<c<<endl;
}
