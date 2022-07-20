#include<bits/stdc++.h>
using namespace std;
#define mxn 100

vector<int> adj[mxn];
int indeg[mxn];
bool vis[mxn];
vector<int>ans;

void toposort(int n)
{
    if(ans.size()==n){
        for(int x: ans)
            cout<<x<<" ";
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        if(vis[i] || indeg[i]!=0) continue;
        vis[i]=true;
        ans.push_back(i);
        for(int j=0;j<adj[i].size();j++) --indeg[adj[i][j]];

        toposort(n);
        vis[i]=false;
        ans.pop_back();
        for(int j=0;j<adj[i].size();j++) ++indeg[adj[i][j]];

    }
}

int main()
{
    int nodes,edges,x,y;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        indeg[y]++;
    }

    toposort(nodes);


    return 0;
}

/**
8 14
7 6
0 2
0 4
4 1
0 3
3 6
1 2
1 3
4 6
2 3
5 6
5 2
5 4
7 5 
*/
