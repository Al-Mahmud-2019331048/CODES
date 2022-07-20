#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int> adj[mxn];
int level[mxn];
bool vis[mxn];

void bfs(int st){
    queue<int>q;
    q.push(st);
    vis[st]=1, level[st]=0;

    while(!q.empty()){
        int u=q.front();
        q.pop();

        cout<<u<<" "<<level[u]<<endl;

        for(int v=0; v<adj[u].size() ;v++){
            if(!vis[adj[u][v]]){
                vis[adj[u][v]]=1;
                level[adj[u][v]]=level[u]+1;
                q.push(adj[u][v]);
            }
        }
    }
}

int main()
{
    int nodes,edges,x,y,z,st;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Enter starting point: "<<endl;
    cin>>st;

    bfs(st);

    for(int i=0;i<nodes;i++){
        cout<<level[i]<<" ";
    }


    return 0;
}

/*
4 6

0 1
0 3
1 2
1 3
2 3
0 2
0

//2nd Testcase

5 5

1 2
1 3
1 5
2 4
4 5

1
*/