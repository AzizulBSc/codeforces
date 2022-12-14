#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nn endl
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
// const int maxn=150;
int ans,v,e,x,y,vis[150];
vector <int> graph[150];
void dfs(int visiting,int length){
	if (vis[visiting]==1&&length%2==0){
		ans++;
		vis[visiting]=2;
	}
	if (vis[visiting]!=0)
		return;
	vis[visiting]=length;
	for (int i=0;i<graph[visiting].size();i++)
		dfs(graph[visiting][i],length+1);
}
void solve(){
	cin>>v>>e;
	for (int i=0;i<e;i++){
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	for (int i=1;i<=v;i++)
		dfs(i,1);
	if ((v-ans)%2==0)
		cout<<ans<<endl;
	else
		cout<<ans+1<<endl;
}

int main()
{
    fastio();
    solve();
    return 0;
}

