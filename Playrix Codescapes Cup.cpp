#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, d, g;
    cin >> n >> t >> k >> d;
    g = (n+k-1)/k ;
    if((t*g)>(t+d))
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}
