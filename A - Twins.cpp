#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    long long n,sum=0;
    cin>>n;
    vector<int>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        sum +=s[i];
    }
    int c = 0,b=0,count=0;
    sort(s.begin(),s.end());
    for(int i =n-1;i>=0;i--){
        c += s[i];
        b = sum - c;
        count++;
        if(c>b)
        break;
    }
    cout<<count<<endl;
    
    return 0;
}
 