#include<iostream>
#include<vector>
#define sz 1000
using namespace std;
vector<int>adj[sz],weight[sz];

void printAdjList(int n)
{
    for(int i=0;i<n;i++){
        cout<<i<<":";
        for(int j=0;j<adj[i].size();j++)
            cout<<"("<<adj[i][j]<<","<<weight[i][j]<<")"<<" \n"[j==adj[i].size()-1];

    }
}

int main()
{
    int n,m,x,y,w;
    cin>>n>>m; //n=node number,m=edge number
    for(int i=0;i<m;i++){
        cin>>x>>y>>w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weight[x].push_back(w);
        weight[y].push_back(w);

    }
    printAdjList(n);

    return 0;
}

/**
4 6
0 1 2
0 3 2
1 2 3
1 3 4
2 3 3
0 2 1
*/
