#include<bits/stdc++.h>
using namespace std;
#define mxn 1e9+7
const int n=1000;

int nodes,edges;
int capacity[n][n];
bool vis[n];
int par[n];
vector<int>path;

void dfs(int x){
    vis[x]=true;
    for(int i=0;i<nodes;i++){
        if(capacity[x][i] and !vis[i]){
            par[i]=x;
            dfs(i);
        }
    }
}

void findPath(int src,int sink){
    memset(vis,0,sizeof(vis));
	memset(par,-1,sizeof(par));
	dfs(src);
	path.clear();

    if(!vis[sink]) return;
    int cur=sink;

    while(cur!=-1){
        path.push_back(cur);
        cur=par[cur];
    }
    return;
}

int findFlow(int src,int sink){
    int flow=0;

    while(1){
        path.clear();
        findPath(src,sink);
        if(path.size()==0) break;

        reverse(path.begin(),path.end());
        int minCap=mxn;

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
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>u>>v>>w;
        capacity[u][v]=w;
    }

    int src,sink;
    cin>>src>>sink;

    int ans=findFlow(src,sink);

    cout<<ans<<endl;
   

    return 0;
}