#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int> adj[mxn];
int level[mxn]={-1};

void bfs(int n,int src){

    for(int i=0;i<mxn;i++)
        level[i]=-1;

    cout<<"start bfs"<<endl;
    
    queue<int>q;
    level[src]=0;
    q.push(src);

    while(!q.empty()){
        int cur=q.front();
        q.pop();
        for(int i=0;i<adj[cur].size();i++){
            int now=adj[cur][i];
            if(level[now]==-1){
                level[now]=level[cur]+1;
                q.push(now);
            }
        }
    }
}



int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=0;i<nodes;i++){
        cout<<i<<" :";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    bfs(nodes,0);

    cout<<"Distance all nodes from 0 node:"<<endl;
    for(int i=0;i<nodes;i++){
        cout<<i<<" "<<level[i]<<endl;
    }
    cout<<endl;


    return 0;
}