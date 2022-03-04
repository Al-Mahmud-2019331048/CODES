#include<bits/stdc++.h>
using namespace std;
#define sz 100000

vector< int> adj[sz];

int dist[sz];
bool flag=0;
bool vis[sz];


bool bfs(int st)
{
	memset(dist,-1, sizeof(dist));
	memset(vis,-1, sizeof(vis));

	queue<int>q;
	q.push(st);
	vis[st]=1;
	while (!q.empty()) {
		int cur = q.front();
		//cout<<"cur: "<<cur<<endl;
		q.pop();
		for (int i = 0; i < adj[cur].size(); ++i)
		{
			if (vis[i] == -1) {
				q.push(i);
				if(vis[cur]==0)
					vis[adj[cur][i]]=1;
				else
					vis[adj[cur][i]]==0;
			}
			else{
				if(vis[cur] == vis[adj[cur][i]]){
					return 0;
				}
			}
		}
	}
	return 1;

}




int main()
{

	int nodes, edges, x, y;
	while (1) {
		cin >> nodes >> edges;
		if (nodes == 0)
			return 0;
		for (int i = 0; i < edges; ++i)
		{
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		//printList(nodes);
		bool flag=bfs(x);
		if (flag)
			cout << "BICOLORABLE." << '\n';
		else
			cout << "NOT BICOLORABLE." << '\n';

		for (int i = 0; i < nodes; ++i)
		{
			adj[i].clear();
		}
	}

	return 0;
}