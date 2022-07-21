#include<bits/stdc++.h>

using namespace std;

#define MXN 1e9+7
const int N=1000;

int capacity[N][N];
int visited[N],parent[N];
int n,m;
vector<int>path;

void dfs(int x){
	visited[x]=true;
	for(int i=0;i<n;i++){
		if(capacity[x][i] && !visited[i]){
			parent[i]=x;
			dfs(i);
		}
	}
}

void findPath(int src,int snk){
	memset(visited,0,sizeof(visited));
	memset(parent,-1,sizeof(parent));
	dfs(src);
	path.clear();
	if(!visited[snk]) return;
	int curNode=snk;
	while(curNode!=-1){
		path.push_back(curNode);
		curNode=parent[curNode];
	}
	return;
}

int findflow(int srce,int sink){
	int flow=0;
	while(1){
		path.clear();
		findPath(srce,sink);
		if(!path.size())break;
		reverse(path.begin(),path.end());
		int minCap=MXN;
		for(int i=0;i<path.size()-1;i++){
			int u=path[i];
			int v=path[i+1];
			minCap=min(minCap,capacity[u][v]);
		}
		flow+=minCap;
		for(int i=0;i<path.size()-1;i++){
			int u=path[i];
			int v=path[i+1];
			capacity[u][v]-=minCap;
			capacity[v][u]+=minCap;
		}
	}
	return flow;
}

int main()
{
    int u,v,w;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>u>>v>>w;
		capacity[u][v]=w;
	}
	int src,sink;
	cin>>src>>sink;

	int ans=findflow(src,sink);
	cout<<ans<<endl;

}

/*
6 8
0 1 11
0 2 12
2 1 1
1 3 12
2 4 11
4 3 7
4 5 4
3 5 19
0 5

4 5
0 1 6
0 2 4
1 2 10
1 3 2
2 3 5
0 3

*/
