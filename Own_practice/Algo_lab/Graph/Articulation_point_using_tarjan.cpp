#include<bits/stdc++.h>
using namespace std;
#define sz 100

int nodes;
vector<int>adj[sz];

void dfs(int u,vector<int>&disc, vector<int>&low,vector<int>&parent,vector<bool>&APs){
    static int time=0;
    disc[u]=low[u]=time++;
    int child=0;

    for(int v: adj[u]){
        if(disc[v]==-1){
            child++;
            parent[v]=u;
            dfs(v,disc,low,parent,APs);
            low[u]=min(low[u],low[v]);

            if(parent[u]==-1 and child>1)
                APs[u]=true;
            else if(parent[u]!=-1 and low[v]>=disc[u])  //not root node
                APs[u]=true;
        }
        if(v!=parent[u])
            low[u]=min(low[u],disc[v]);
    }
}

void Articulation_points()
{
    vector<int>disc(nodes,-1),low(nodes,-1),parent(nodes,-1);
    vector<bool>APs(nodes,false);

    for(int i=0;i<nodes;i++){
        if(disc[i]==-1){
            dfs(i,disc,low,parent,APs);
        }
    }
    
    cout<<"Articulation Points are:"<<endl;
    for(int i=0;i<nodes;i++)
        if(APs[i]==true)
            cout<<i<<" ";
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

    Articulation_points();

    return 0;
}