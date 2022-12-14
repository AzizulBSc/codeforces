#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k, t, x, y, tmp;
    cin >> n >> m >> k >> t;
    string s[3] = {"Grapes", "Carrots", "Kiwis"};
    vector <int> v;

    for(int i = 0; i < k; i++)
    {
        cin >> x >> y;
        tmp = (x-1) * m + y;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < t; i++)
    {
        cin >> x >> y;
        tmp = (x-1) * m + y;
        int lb = lower_bound(v.begin(), v.end(), tmp) - v.begin();
        if(v[lb]== tmp)
        {
            cout << "Waste" << endl;
        }
        else
        {
            cout << s[(tmp - lb) % 3] << endl;
        }
    }
}
int main()
{
    // freopen("in.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    solve();
    return 0;
}











/*

#include <bits/stdc++.h>
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
void solve()
{
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    int a[k],b[k];
    string field[n][m];
    for(int i = 0; i<k; i++)
    {
        cin>>a[i]>>b[i];

        }
       int w[t],z[t];
    for(int i = 0; i<t; i++)
    {
        cin>>w[i]>>z[i];
    }
      for(int i = 0; i<k; i++)
    {
        field[a[i]][b[i]] = "Waste";
    }
    vector<string> crop;
    crop.push_back("Carrots");
    crop.push_back("Kiwis");
    crop.push_back("Grapes");
    cout<<crop[0]<<nn;
     int temp = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j= 1; j<=m; j++)
        {
            if(field[i][j]!="Waste")
            {
                field[i][j] = "t";
                //if(temp==3) temp =0;
            }
        }
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j= 1; j<=m; j++)
        {
           cout<<field[i][j]<<nn;
        }
    }



}
int main()
{
    fastio();
    // freopen("in.txt","r",stdin);
    //ll t=1;
    // cin>>t;
    // while(t--){
    solve();
    // }
    return 0;
} */
