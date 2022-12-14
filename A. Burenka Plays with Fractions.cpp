#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a/b==c/d)&&(a%b==0&&c%d==0))
        {
            cout<<0<<"\n";continue;
        }
        if((a>=1&&c==0)||(a==0&&c>=1)){
            cout<<1<<"\n";continue;
        }
        if(a!=b==c==d){
            cout<<1<<"\n";continue;
        }
        if((b==c&&a!=d)||(a==d&&b!=c)){
            cout<<2<<"\n";continue;
        }
        else
        {
            cout<<1<<"\n";
        }
    }
}
int main()
{
    solve();
    return 0;
}
