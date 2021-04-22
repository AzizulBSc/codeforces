#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,a=0,d=0;
    string s;
    cin>>n>>s;
    for(int i =0;i<n;i++)
     {
         if(s[i]=='A') a++;
         else if(s[i]=='D') d++;
         else if(s[i]==' ') continue;
     }
     if(a>d) cout<<"Anton"<<endl;
     else if(a==d) cout<<"Friendship"<<endl;
     else if(a<d) cout<<"Danik"<<endl;
}
