#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

//we simply use vector in stead of queue

vector<int>adj[mxn];
int dist[mxn],par[mxn];
bool vis[mxn];

void init()
{
    for(int i=0;i<mxn;i++)
        dist[i]=-1,par[i]=-1;
}

void bfs(int st)
{
    init();

    vector<int>v;
    v.push_back(st);
    vis[st]=true;
    dist[st]=0;
    int i=0;
    while(i<v.size()){
        int u=v[i];
        for(int j=0;j<adj[u].size();j++){
            int now=adj[u][j];
            if(!vis[now]){
                vis[now]=true;
                dist[now]=dist[u]+1;
                par[now]=u;
                v.push_back(now);
            }
        }
        i++;
    }
}


int main()
{
    int nodes,edges,x,y,st;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin>>st;
    bfs(st);

    //1 based node
    for (int i = 1; i <= nodes; i++)
        cout << "dist from " << st << " to " << i << " is : " << dist[i] << endl;


    return 0;
}

/*
7 9
1 2
1 3
1 7
2 3
3 7
2 4
4 5
3 6
5 6
1
*/