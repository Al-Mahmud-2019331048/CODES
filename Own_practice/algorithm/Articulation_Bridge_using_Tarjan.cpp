#include<bits/stdc++.h>
using namespace std;
#define mxn 1000
int nodes;

//O(V+E)

vector<int> adj[mxn];

void dfs(int u,vector<int>&disc,vector<int>&low,vector<int>&parent,vector<pair<int,int>>&bridge){
    static int time=0;
    disc[u]=low[u]=time;
    time++;

    for(int v: adj[u]){
        if(disc[v]==-1){  //not visited
            parent[v]=u;
            dfs(v,disc,low,parent,bridge);
            low[u]=min(low[u],low[v]);

            if(low[v]>disc[u])  //No back edge either this node v or it's ancestor
                bridge.push_back({u,v});
        }
        else if(v!=parent[u])  //ignore child to parent edge
            low[u]=min(low[u],disc[v]);
    }

}

void  findABs_Tarjan()
{
    vector<int>disc(nodes,-1),low(nodes,-1),parent(nodes,-1);
    vector< pair<int,int> > bridge;

    for(int i=0;i<nodes;i++){
        if(disc[i]==-1)
            dfs(i,disc,low,parent,bridge);
    }

    cout<<"Articulation Bridges are:"<<endl;
    for(auto x: bridge)
        cout<<x.first<<"-"<<x.second<<endl;
}


int main()
{
    int edges,x,y;
    cin>>nodes>>edges;
    
    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    findABs_Tarjan();

    return 0;
}

/*
5 5
0 1
0 2
1 2
0 3
3 4
*/