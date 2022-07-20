#include<bits/stdc++.h>
using namespace std;
#define mxn 1000
int nodes;

vector<int> adj[mxn];

void dfs(int u,vector<int>&disc,vector<int>&low,vector<int>&parent,vector<pair<int,int> >&bridge){
    static int time=0;
    disc[u]=low[u]=time;
    time++;
    int child=0;
    for(int v: adj[u]){
        if(disc[v]==-1){  //if not visited
            parent[v]=u;
            dfs(v,disc,low,parent,bridge);
            low[u]=min(low[u],low[v]);

            if(low[v]> disc[u]) //Case 2:not root node,Atleast 1 component will get separated
               bridge.push_back({u,v});

        }
        //visited
        else if(v!=parent[u])  //ignore child to parent edge. Back edge
            low[u]=min(low[u],disc[v]);
    }

}

void findAP_bridge_Tarjan()
{
    vector<int> disc(nodes,-1),low(nodes,-1),parent(nodes,-1);
    vector<pair<int,int> >bridge;

    for(int i=0;i<nodes;i++){
        if(disc[i]==-1)
            dfs(i,disc,low,parent,bridge);
    }

    cout<<"Articulation Bridges are:"<<endl;
    for(auto x:bridge)
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

    findAP_bridge_Tarjan();


    return 0;
}

/*
6 6
0 1
0 2
0 3
1 2
3 4
3 5

*/