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

int dijkstra(int st,int e){
    init();

    priority_queue< pair<int,int> ,vector<pair <int,int> > , greater< pair<int,int> > > pq;
    pq.push({0,st});
    cost[st]=0;
    int c,x;
    while(!pq.empty()){
        c=pq.top().first;
        x=pq.top().second;
        pq.pop();
        for(int i=0;i<adj[x].size();i++){
            if(c+weight[x][i] < cost[adj[x][i]]){   //relaxation
                cost[adj[x][i]]=c+weight[x][i];
                par[adj[x][i]]=x;
                pq.push({cost[adj[x][i]],adj[x][i]});
            }
        }
    }
    return cost[e];
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

    x= dijkstra(st,end);
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