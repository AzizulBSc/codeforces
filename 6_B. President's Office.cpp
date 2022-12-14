#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define yes cout<<"YES"<<nn
#define no cout<<"NO"<<nn
#define IN1(x);ll x;cin>>x;
#define IN2(x,y);ll x,y;cin>>x>>y;
#define IN3(x,y,z);ll x,y,z;cin>>x>>y>>z;
#define VIN(v);for(ll i = 0;i<v.size();i++) cin>>v[i];
#define For(i,n) for(ll i = 0;i<n;i++)
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void solve()
{
    IN2(x,y);
    char c;
    cin>>c;
    char deskColor[x][y];
    For(i,x)
    {
        For(j,y)
        {
            cin>>deskColor[i][j];
        }
    }
    set<char> s;
    For(i,x)
    {
        For(j,y)
        {
            if(deskColor[i][j]==c)
            {
                 s.insert(deskColor[i][j]);
                if(deskColor[i][j+1]!='.'&&j+1<y)
                {
                    s.insert(deskColor[i][j+1]);

                }
                if(deskColor[i][j-1]!='.'&&j>0)
                {
                    s.insert(deskColor[i][j-1]);

                }
                if(deskColor[i+1][j]!='.'&&i+1<x)
                {
                    s.insert(deskColor[i+1][j]);

                }
                if(deskColor[i-1][j]!='.'&&i>0)
                {
                    s.insert(deskColor[i-1][j]);

                }
            }


        }
    }
    cout<<s.size()-1<<nn;

}


int main()
{
    fastio();
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
