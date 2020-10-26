#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    string n;
    map<string, int> reg;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(reg[n]==0)
        { 
            reg[n]=1;
            cout<<"OK"<<endl;
            
        }
           
        else
        {
            cout<<n<<reg[n]<<endl;
            reg[n]++;
        }
    }
}