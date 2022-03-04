#include<bits/stdc++.h>
using namespace std;
#define sz 100000

vector< int> adj[sz];
bool flag = 0;
int vis[sz];


bool bfs(int st)
{
	memset(vis, -1, sizeof(vis));

	queue<pair<int, int> >q;
	q.push({st, 0});
	//vis[st]=0;
	while (!q.empty()) {
		int cur = q.front().first;
		int col = q.front().second;
		//cout << cur << " " << col << '\n';
		vis[cur] = col;
		q.pop();
		//cout << adj[cur].size() << '\n';
		for (int i = 0; i < adj[cur].size(); ++i)
		{
			int next = adj[cur][i];
			//cout << vis[next] << '\n';
			if (vis [next] == -1) {
				//cout << next << '\n';
				q.push({next, !col});
			}
			else {
				if (vis[cur] == vis[next])

					return 0;
			}
		}
	}
	return 1;

}


int main()
{

	int nodes, edges, x, y;
	while (1) {
		cin >> nodes;
		if (nodes == 0)
			return 0;
		cin >> edges;
		for (int i = 0; i < edges; ++i)
		{
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		//printList(nodes);

		bool flag = bfs(0);

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