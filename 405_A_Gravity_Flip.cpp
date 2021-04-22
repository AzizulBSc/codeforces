#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k;
    vector <int> a;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
