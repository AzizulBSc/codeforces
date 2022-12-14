#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i = 0; i<T; i++)
    {
        int N;
        cin>>N;
        if (N==1)
            cout<<N<<endl;
        else
        {
            if(N%2==0)
            {
                for(int j=1; j<=N; j++)
                {
                    if(j%2==0)
                    {
                        cout<<j-1<<" ";
                    }
                    else
                    {
                        cout<<j+1<<" ";
                    }
                }
                cout<<endl;
            }
            else
            {
                for(int j=1; j<=N; j++)
                {
                    if(j==1)
                    {
                        cout<<1<<" ";
                    }
                    else if(j%2==0)
                    {
                        cout<<j+1<<" ";
                    }
                    else
                    {
                        cout<<j-1<<" ";
                    }
                }
                cout<<endl;

            }

        }
    }
return 0;
}
