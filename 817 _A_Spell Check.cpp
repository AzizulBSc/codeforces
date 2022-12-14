#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll t;
    cin>>t;

    map<char,int> name;
    for(ll i = 0; i<t; i++)
    {
        name['T'] = 1;
        name['i'] = 1;
        name['m'] = 1;
        name['u'] = 1;
        name['r'] = 1;
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n>5 ||n<5)
        {
            cout<<"NO"<<nn;
        }
        else
        {
            int flag = 1;
            for(ll j = 0; j<n; j++)
            {
                if(name[s[j]]==0 ||name[s[j]]==2)
                {
                    flag = 0;
                    break;

                }
                else
                {
                    name[s[j]]= 2;

                }
            }
            if(flag==1)
            {
                cout<<"YES"<<nn;
            }
            else
            {
                cout<<"NO"<<nn;
            }

        }

    }
}


int main()
{
    fastio();
    solve();
    return 0;
}

