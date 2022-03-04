#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define sz 1000
using namespace std;

bool vis[sz];  //visited or not?
vector<int> adj[sz]; //adjacancy list
int par[sz];  //containing path

int bfs(int s,int d)
{
    queue< pair<int,int> >q;
    q.push({s,0});
    vis[s]=true;  //visited s node
    int node,cost,u;

    while(!q.empty())
    {
        node=q.front().first;
        cost=q.front().second;
        q.pop();
        if(node==d) return cost; //if we get destinstion ,we return cost
        for(int i=0;i<adj[node].size();i++)
        {
           u=adj[node][i];
           if(vis[u]) continue;
           q.push({u,cost+1});
           vis[u]=true;
           par[u]=node;
        }

    }
    return -1;
}

void init(int n)
{
    for(int i=0;i<n;i++)
        par[i]=-1;

}
int main()
{
    int n,m,w,x,y;

    cin>>n>>m;
    init(n);
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;  //input: edge between nodes
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin>>x>>y; //source & destination input
    w=bfs(x,y);
    if(~w)
    {
        cout<<"minimum costn from"<<x<<"to"<<y<<"  using bfs:"<<w<<endl;
        vector<int>path; //reverse korar jonno par theke path e nilam
        while(~y){
            path.push_back(y);
            y=par[y];
        }
        reverse(path.begin(),path.end());
        for(int i=0;i<path.size();i++)
        {
            cout<<path[i]<<",\n"[i==path.size()-1];
        }
    }

    else cout<<"There is no path between"<<x<<"to"<<y<<endl;
    return 0;
}

/**
4 6

0 1
0 3
1 2
1 3
2 3
0 2

1 3
*/
