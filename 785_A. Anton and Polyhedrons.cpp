
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    ll n,totalFaces=0;
    map<string,int> polyhedrons;
    polyhedrons["Tetrahedron"] = 4;
    polyhedrons["Cube"] = 6;
    polyhedrons["Octahedron"] = 8;
    polyhedrons["Dodecahedron"] = 12;
    polyhedrons["Icosahedron"] = 20;
    string Polyhedron;
    cin>>n;
    while(n--){
        cin>>Polyhedron;
        totalFaces += polyhedrons[Polyhedron];
    }
    cout<<totalFaces<<nn;

}


int main()
{
    fastio();
    solve();
    return 0;
}


