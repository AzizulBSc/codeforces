
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
       set<char> color;
        string s1;
        string s2;
        cin>>s1>>s2;
        for(int i = 0;i<2;i++){
            color.insert(s1[i]);
            color.insert(s2[i]);
        }
        cout<<color.size()-1<<nn;
    }

}


int main()
{
    fastio();
    solve();
    return 0;
}

