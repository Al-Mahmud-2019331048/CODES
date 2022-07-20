#include<bits/stdc++.h>
using namespace std;
#define mxn 100

vector<int>adj[mxn],cost[mxn];
int par[mxn];

int find_par(int n){   //dsu check
    if(par[n]==n) return n;
    return par[n]=find_par(par[n]);
}

priority_queue< pair<int, pair<int,int> >, 
    vector<pair<int, pair<int,int> > >, 
        greater<pair<int, pair<int,int> > >  > pq;

int kruskal(int n){
    int p,q,w,total=0,u,v,st;
    for(st=0;st<n;st++){
        for(int i=0;i<adj[st].size();i++){
            p=min(st,adj[st][i]);
            q=max(st,adj[st][i]);
            pq.push({cost[st][i],{p,q}});
        }
    }
    
    vector< pair<int, pair<int,int> > >ans;

    while(!pq.empty()){
        w=pq.top().first;
        p=pq.top().second.first;
        q=pq.top().second.second;
        pq.pop();

        //DSU check
        u=find_par(p);
        v=find_par(q);

        if(u!= v){
            par[u]=v;  //merge parent
            ans.push_back({w,{p,q}});
            total+=w;
        }
    }

    cout<<"Edge list in MST:"<<endl;
    for(auto x:ans){
        cout<<"("<<x.second.first<<","<<x.second.second<<") ->"<<x.first<<endl;
    }
    return total;
}


//parenting
void mst_init(int n){
    for(int i=0;i<=n;i++){
        par[i]=i;
    }
}


int main()
{
    int nodes,edges,x,y,z;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y>>z;
        adj[x].push_back(y);
        adj[y].push_back(x);
        cost[x].push_back(z);
        cost[y].push_back(z);
    }

    mst_init(nodes);

    int w=kruskal(nodes);
    cout<<"Total weight:"<<w<<endl;


}

/*
6 9
1 2 2
1 5 1
1 4 1
2 3 3
2 5 2
3 5 1
3 6 5
4 6 2
5 6 3
*/