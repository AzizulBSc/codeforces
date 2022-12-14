#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        string p[3][1005];
        map <string,int> word;
        int n;
        cin>>n;
        for(int i = 0; i<3; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin>>p[i][j];
                ++word[p[i][j]];
            }
        }
        for(int i = 0; i<3; i++)
        {
            int score = 0;
            for(int j = 0; j<n; j++)
            {
                if(word[p[i][j]]==1)
                {
                    score += 3;
                }
                if(word[p[i][j]]==2)
                {
                    score += 1;
                }
            }
            cout<<score<<" ";

        }
        cout<<nn;


    }
}


int main()
{
    fastio();
    solve();
    return 0;
}

