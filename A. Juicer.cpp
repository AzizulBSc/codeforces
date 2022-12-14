#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d;
    int c=0,ans=0;
    cin>>n>>b>>d;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a<=b)
        {
            c += a;
        }
        if(c>d)
        {
            c = 0;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
