#include <bits/stdc++.h>
using namespace std;
#define mxn 1000
const int inf=1<<25;

vector<int> adj[mxn], weight[mxn];
int cost[mxn],par[mxn];

void init(){
    for(int i=0;i<mxn;i++)
        par[i]=-1,cost[i]=inf;
}

int dijkstra(int st,int end)
{
    init();
    priority_queue< pair<int,int> , vector< pair<int,int>> , greater< pair<int,int> > > pq;

    pq.push({0,st});
    cost[st]=0;

    while(!pq.empty()){
        int u=pq.top().second;
        int cur_cost=pq.top().first;
        pq.pop();

        for(int v=0;v<adj[u].size();v++){
            int now=adj[u][v];

            if(cur_cost+weight[u][v] < cost[now]){
                cost[now]= cur_cost+weight[u][v];
                pq.push({cost[now],now});
                par[now]=u;
            }
        }
    }

    return cost[end];
}

int main()
{
    int nodes, edges, x, y, z;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y >> z;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weight[x].push_back(z);
        weight[y].push_back(z);
    }

    int st,end;
    cin>>st>>end;

    int c=dijkstra(st,end);
    cout<<"Minimum cost from "<<st<<" to "<<end<<" is:"<<c<<endl;

    x=end;
    vector<int>res;
    while(~x){
        res.push_back(x);
        x=par[x];
    }

    reverse(res.begin(),res.end());
    cout<<"The path is:"<<endl;
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<"-\n"[i==res.size()-1];


    return 0;
}


/*
7 10

0 2 1
0 3 6
1 5 1
3 1 2
1 6 5
2 5 8
2 3 2
4 3 9
4 5 2
6 4 1

0 6
*/