#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string remix;
    cin>>remix;
    for(int i = 0; i<remix.size(); i++)
    {
         if((remix[i]=='W') && (remix[i+1]=='U') && (remix[i+2]=='B') ){
                i +=2;
             cout<<" ";

        }
        else
        {

            cout<<remix[i];
        }
    }
    cout<<nn;


}


int main()
{
    fastio();
    solve();
    return 0;
}

