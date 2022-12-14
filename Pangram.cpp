#include <bits/stdc++.h>
 
using namespace std;
long long a[300],b,c;
string s;
int main()
{
    cin>>b;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
       s[i]=tolower(s[i]); a[s[i]]++;
    }
    for(int i='a';i<='z';i++)
    {
        if(a[i]==0) {cout<<"NO";return 0;}
    }
    cout<<"YES";
    return 0;
}
 