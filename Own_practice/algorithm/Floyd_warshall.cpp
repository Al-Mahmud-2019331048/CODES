#include<bits/stdc++.h>
using namespace std;
#define mxn 1000
#define inf 1<<27

vector<int>adj[mxn];
int dist[mxn][mxn];

void init(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) dist[i][j]=0;
            else dist[i][j]=inf;
        }
    }
}

void warshall(int n){
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
}


int main()
{
    int nodes,edges,x,y,z;
    cin>>nodes>>edges;

    init(nodes);

    for(int i=0;i<edges;i++){
        cin>>x>>y>>z;
        adj[x].push_back(y);
        dist[x][y]=z;
    }

    warshall(nodes);

    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            if(dist[i][j]==inf) cout<<"i"<<endl;
            else cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

//O(n^3)

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
*/