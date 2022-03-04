#include<bits/stdc++.h>
using namespace std;
#define sz 100000

vector<int> adj[sz];
bool vis[sz];
int dista[sz],distd[sz];

void bfsa(int st)
{
	memset(vis,0,sizeof(vis));
	//cout<<st<<endl;
	queue<int>q;
	q.push(st);
	vis[st]=1;
	dista[st]=0;
	int cur_node,cur_cost,next;
	while(!q.empty()){
		cur_node=q.front();
		q.pop();
		for (int i = 0; i < adj[cur_node].size(); ++i)
		{
			next=adj[cur_node][i];
			if(vis[next]) continue;
			q.push(next);
			vis[next]=1;
			dista[next]=dista[cur_node]+1;
		}
	}
}
void bfsb(int st)
{
	memset(vis,0,sizeof(vis));
	//cout<<st<<endl;
	queue<int>q;
	q.push(st);
	vis[st]=1;
	distd[st]=0;
	int cur_node,cur_cost,next;
	while(!q.empty()){
		cur_node=q.front();
		q.pop();
		for (int i = 0; i < adj[cur_node].size(); ++i)
		{
			next=adj[cur_node][i];
			if(vis[next]) continue;
			q.push(next);
			vis[next]=1;
			distd[next]=distd[cur_node]+1;
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int test;
	cin>>test;
	for (int i = 1; i <= test; ++i)
	{
		int nodes,edges,x,y;
		cin>>nodes;
		cin>>edges;
		for (int i = 0; i < edges; ++i)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		int s,d;
		cin>>s>>d;
		int cost=-1;
		bfsa(s);
		bfsb(d);
		for (int i = 0; i < nodes; ++i)
		{
		  cost = max (cost, dista[i]+distd[i]);
		}

		cout<<"Case "<<i<<": "<<cost<<'\n';

		for (int i = 0; i < nodes; ++i)
		{
			adj[i].clear();
		}

	}
}