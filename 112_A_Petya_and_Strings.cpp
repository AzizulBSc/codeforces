#include<bits/stdc++.h>
using namespace std;
main()
{
    char s1[100],s2[100];
    int result;
    cin>>s1>>s2;
    for(int i=0;i<strlen(s1);i++)
    {
        s1[i]=toupper(s1[i]);
    }
    for(int i=0;i<strlen(s2);i++)
    {
         s2[i]=toupper(s2[i]);
    }
  result = strcmp(s1, s2);
  cout<<result<<endl;
}
