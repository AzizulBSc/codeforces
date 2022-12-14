#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string team;
    map<string,int> teamGoal;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>team;
        teamGoal[team] +=1;

    }
    auto maxGoalTeam = max_element(begin(teamGoal),end(teamGoal),
                                   [] (const auto &x, const auto &y)
    {
        return x.second < y.second;
    }
                                  );
    cout<< maxGoalTeam->first <<nn;
}


int main()
{
    fastio();
    solve();
    return 0;
}

