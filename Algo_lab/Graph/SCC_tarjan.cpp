#include<bits/stdc++.h>
using namespace std;
#define mxn 1000
int nodes;

vector< int > adj[mxn];

void dfs(int u,vector<int>& disc,vector<int>&low,vector<bool>&InStack,stack<int>&st){
    static int time=0;
    disc[u]=low[u]=time;
    time++;
    st.push(u);
    InStack[u]=true;

    for(auto v : adj[u]){
        if(disc[v]==-1){  //if v is not visited
            dfs(v,disc,low,InStack,st);
            low[u]=min(low[u],low[v]);  //when backtracking low val updating
        }

        //if visited & in stack - back edge
        //else cross edge (skip it)
        else if(InStack[v])   //back edge
            low[u]=min(low[u],disc[v]);
    }
    if(low[u]==disc[u]){  //if u is head node of SCC
        cout<<"SCC is:"<<endl;
        while(st.top()!=u){  //keep popping till the node comes in stack
            cout<<st.top()<<" ";
            InStack[st.top()]=false;
            st.pop();
        }
        cout<<st.top()<<endl;
        InStack[st.top()]=false;
        st.pop();
    }
}

void SCC()
{
    vector<int> disc(nodes,-1),low(nodes,-1);
    vector<bool> InStack(nodes,false);
    stack<int>st;

    for(int i=0;i<nodes;i++){
        if(disc[i]==-1)
            dfs(i,disc,low,InStack,st);
    }
}

int main()
{
    int edges,x,y;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }

    SCC();

    return 0;
}