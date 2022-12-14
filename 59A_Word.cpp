#include<bits/stdc++.h>
using namespace std;
main()
{
    string w;
    int l=0,u=0,c;
    cin>>w;
    for(int i=0; i<w.size(); i++)
    {
        c = w[i];
        if(c>=65&&c<=90)
            u++;
        else
            l++;


    }
    if(l>=u)
    {
        transform(w.begin(),w.end(),w.begin(),::tolower);
        cout<<w<<endl;

    }

    else
    {
        transform(w.begin(),w.end(),w.begin(),::toupper);
        cout<<w<<endl;

    }


}
