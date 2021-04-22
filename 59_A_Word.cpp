#include<bits/stdc++.h>
using namespace std;
main()
{
    int l=0,u=0;
    string s;
    cin>>s;
    for(int i =0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            u++;
        }
        else
        {
            l++;
        }

    }
    if(l>=u)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    else
    {
         transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }

}
