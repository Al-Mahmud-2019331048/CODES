#include <bits/stdc++.h>
using namespace std;
#define mxn 100
int nodes;

vector<int> adj[mxn];

void dfs(int node, vector<bool> & vis){
    vis[node]=true;
    for(int x: adj[node]){
        if(!vis[x])
            dfs(x,vis);
    }
}

bool Connected_Graph()
{
    vector<bool> vis(nodes+1,false);
    int node=-1;

    for(int i=1;i<=nodes;i++){
        if(adj[i].size()>0){
            node=i;   //found a node with at least one edge to start dfs
            break;
        }
    }
    if(node==-1) return true;  //no edge is present in the graph ,always eulerian

    dfs(node,vis);

    for(int i=1;i<=nodes;i++){
        if(!vis[i] && adj[i].size()>0)
            return false;
    }

    return true;
}

int FindEuler()
{
    if(!Connected_Graph())  //multi component graph
        return 0;
    
    int odd=0;
    for(int i=1;i<=nodes;i++){
        if(adj[i].size() % 2)
            odd+=1;
    }

    if(odd>2) return 0;

    return (odd==2)? 1:2; //1-semi eulerian, 2-eulerian 
}

void removeEdge(int u,int v)
{
    vector<int> :: iterator it;

    it=find(adj[v].begin(),adj[v].end(),u);
    *it=-1;
    it=find(adj[u].begin(),adj[u].end(),v);
    *it=-1;
}

int dfscnt(int u,vector<bool> & vis){
    vis[u]=true;
    int cnt=1;
    for(auto v: adj[u]){
        if(v!=-1 and !vis[v])
            cnt+=dfscnt(v,vis);
    }
    return cnt;
}

bool isValidNextEdge(int u,int v){
    int cnt=0;
    for(auto av: adj[u])
        if(av!=-1)
            cnt++;
    if(cnt==0) return false;  //no edge left
    if(cnt==1) return true;  //only one way, so remove this

    //for multi edge purpose
    vector<bool> vis(nodes,false);

    //before removing the edge, total reachable nodes=cnt1
    int cnt1=dfscnt(u,vis);

    removeEdge(u,v);
    fill(vis.begin(),vis.end(),false);
    //after removing the edge, total reachable nodes=cnt2
    int cnt2=dfscnt(u,vis);
    cout<<cnt1<<" "<<cnt2<<endl;

    //add the u-v edge
    adj[u].push_back(v);
    adj[v].push_back(u);

    //if(cnt1>cnt2) then u-v is a bridge

    return (cnt1>cnt2)? false:true;
}

void eulerCycle(int st)
{
    for(int av : adj[st]){
        if(av!=-1 and isValidNextEdge(st,av)){
            cout<<st<<"-"<<av<<endl;
            removeEdge(st,av);
            eulerCycle(av);
        }
    }
}

int main()
{
    int edges, x, y;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    int ret = FindEuler();
    if (ret == 0)
        cout << "Not Euler graph" << endl;
    else if (ret == 1)
        cout << "Semi-Euler Graph - Have Euler Path" << endl;
    else
        cout << "Euler graph - Have Euler Cycle" << endl;
    
    //Eulerian or semi eulerian
    if(ret!=0){
        int start=1;  //try to start from an odd degree vertex
        for(int i=1;i<=nodes;i++)
            if(adj[i].size()%2){
                start=i;break;
            }
        cout<<start<<endl;
        cout<<"Euler Path: "<<endl;
        eulerCycle(start);
    }
    

    return 0;
}

/*
5 6
1 2
1 4
2 3
2 4
2 5
3 5

*/