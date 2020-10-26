#include<bits/stdc++.h>
using namespace std;
main()
{
    string s,t;
    cin>>s;
    cin>>t;
    if(s==string(t.rbegin(),t.rend()))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}