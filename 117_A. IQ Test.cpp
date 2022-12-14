#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool is_possible_squre(char paper[4][4], int i, int j)
{
    int num_hash = 0;
    int num_dot = 0;
    if(paper[i][j] == '#') num_hash += 1;
    else num_dot += 1;
    if(paper[i][j+1] == '#') num_hash += 1;
    else num_dot += 1;
    if(paper[i+1][j] == '#') num_hash += 1;
    else num_dot += 1;
    if(paper[i+1][j+1] == '#') num_hash += 1;
    else num_dot += 1;

 return ((max(num_hash,num_dot)==3)||(max(num_hash,num_dot)==4));
}
void solve()
{
    char  paper1[4][4];
    for(int i = 0; i<4; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin>>paper1[i][j];
        }
    }
    string ans = "NO";
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            if(is_possible_squre(paper1,i,j))
            {
                ans = "YES";
                break;
            }
        }
        if(ans =="YES")break;
    }
     cout<<ans<<nn;
}


int main()
{
    fastio();
    int t=1;
    while(t--) {
    solve();
}
return 0;
}

