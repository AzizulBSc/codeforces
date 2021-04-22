#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t[100001],c=0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>t[i];
        {
            if(i>=1)
           {
                if(t[i-1]!=t[i])
                {
                    c++;
                }
                else {
                c = c;
                }

            }
        }
    }
    cout<<c+1<<endl;
}
