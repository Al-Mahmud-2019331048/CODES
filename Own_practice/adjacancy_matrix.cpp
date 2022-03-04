#include<iostream>
#define sz 1000
using namespace std;
int adj[sz][sz];

void printAdjMatrix(int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cout<<adj[i][j]<<" \n"[j==n-1];
}

int main()
{
    int n,m,x,y,w;
    cin>>n>>m; //n=node number,m=edge number
    for(int i=0;i<m;i++){
        cin>>x>>y>>w;
        adj[x][y]=w;
        adj[y][x]=w;
    }
    printAdjMatrix(n);

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
