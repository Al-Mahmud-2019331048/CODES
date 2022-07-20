#include<bits/stdc++.h>
using namespace std;
#define mxn 100
int nodes;

vector<int> adj[mxn];

void dfs(int u,vector<int>&disc,vector<int>&low,stack<int>&st,vector<bool>&InStack)
{
    static int time=0;
    disc[u]=low[u]=time++;

    st.push(u);
    InStack[u]=true;

    for(auto v: adj[u]){
        if(disc[v]==-1){
            dfs(v,disc,low,st,InStack);
            low[u]=min(low[u],low[v]);
        }

        else if(InStack[v])
            low[u]=min(low[u],disc[v]);
    }

    if(low[u]==disc[u]){
        while(st.top()!=u){
            cout<<st.top()<<" ";
            InStack[st.top()]=false;
            st.pop();
        }
        cout<<st.top()<<endl;
        InStack[st.top()]=false;
        st.pop();
    }
}

void tarjan()
{
    vector<int>disc(nodes,-1),low(nodes,-1);
    stack<int>st;
    vector<bool> InStack(nodes,false);

    for(int i=0;i<nodes;i++){
        if(disc[i]==-1)
            dfs(i,disc,low,st,InStack);
    }

}

int main()
{
    int edges,x,y;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);   //directed graph
    }

    tarjan();

    return 0;
}