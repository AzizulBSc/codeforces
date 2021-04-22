#include<bits/stdc++.h>
using namespace std;

vector<vector <int> > adj;
vector<bool> vis;
int V,E;

void BFS(int);

int main()
{
    cout<<endl<<"   Bredth First Search of a Graph.(BFS)   "<<endl<<endl;
    int u,v;
    cout<<"Enter vertex  and Edge number."<<endl<<endl;
    cin>>V>>E;
    adj.resize(V);
    vis.resize(V,0);
    cout<<endl<<"Enter "<<E<<" pairs of vertex number connected by Edge."<<endl<<endl;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);//if grap is directed
        //adj[v].push_back(u);// if grap is undirected.
    }
    cout<<endl<<"Bredth First Search of this graph."<<endl<<endl;
    BFS(1);
    return 0;
}

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    vis[s]=1;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        cout<<now<<endl;
        for(int i=0;i<adj[now].size();i++)
        {
           int value = adj[now][i];
           if(!vis[value])
           {
               q.push(value);
               vis[value]=1;
           }
        }
    }

}
