#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define nn "\n"
void solve ()
{
    ll n;
    cin>>n;
    int one = 0,One[5001];
    int two = 0,Two[5001];
    int three = 0,Three[5001];
    vector<int> t(n);
    for(ll i = 0; i<n; i++)
    {
        cin>>t[i];
        if(t[i] ==1)
        {
            One[one] = i+1;
            one++;
        }
        if(t[i] ==2)
        {
            Two[two] = 1+i;
            two++;
        }
        if(t[i] ==3)
        {
            Three[three] = 1+i;
            three++;
        }
    }
    int min1 = min(one,min(two,three));
    cout<<min1<<nn;
    for(ll i=0; i<min1; i++)
    {
        cout << One[i] << " " << Two[i] << " " << Three[i] << "\n";
    }
}

int main ()
{
    fastio()
    solve();
    return 0;
}
