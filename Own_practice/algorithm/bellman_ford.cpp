#include<bits/stdc++.h>
using namespace std;
#define inf 1<<27
#define mxn 1000
vector<int> adj[mxn],weight[mxn];
int par[mxn],cost[mxn];

void init(){
    for(int i=0;i<mxn;i++)
        par[i]=-1,cost[i]=inf;
}

int bellmanFord(int st,int end,int n){
    init();

    cost[st]=0;
    int c,x;
    for(int i=0;i<n-1;i++){

        for(int u=0;u<n;u++){
            for(int v=0;v<adj[u].size();v++){
                if(cost[u]+weight[u][v] < cost[adj[u][v]]){
                    cost[adj[u][v]]=cost[u]+weight[u][v];
                    par[adj[u][v]]=u;
                }
            }
        }
    }

        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                if(cost[i]+weight[i][j]<cost[adj[i][j]]){
                    cout<<"Shortest path cannot be determined \nNegative cycle detected"<<endl;
                    return -inf;
                }
            }
        }
        return cost[end];
}




int main()
{
    int nodes,edges,x,y,w;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        cin>>x>>y>>w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weight[x].push_back(w);
        weight[y].push_back(w);
    }

    int st,end;
    cin>>st>>end;
    
    x= bellmanFord(st,end,nodes);
    if(x==-inf) return 0;

    cout<<"Minimum cost from "<<st<<" to "<<end<<" is:"<<x<<endl;
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

