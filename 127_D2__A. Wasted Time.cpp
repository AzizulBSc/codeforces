#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
double  distance(double x1,double x2,double y1,double y2)
{
    double dx = x1-x2;
    double dy = y1-y2;
    return sqrt(dx*dx+dy*dy);
}
void solve()
{
    int n,k;
    cin>>n>>k;
    double sum = 0;
    int x1,y1;
    cin>>x1>>y1;
    for(int i=0; i<n-1; i++)
    {
        int x2,y2;
        cin>>x2>>y2;
        sum += distance(x1,x2,y1,y2);
        x1 = x2;
        y1 = y2;
    }
    cout.setf(ios::fixed);
    cout.precision (8);
    cout<<(sum*k)/50<<nn;

}


int main()
{
    fastio();
    solve();
    return 0;
}


