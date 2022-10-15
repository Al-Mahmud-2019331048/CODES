#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int> adj[mxn];
int indeg[mxn];

void toposort(int n)
{
    vector<int>ans;
    queue<int>q;
    for(int i=0;i<n;i++)
        if(indeg[i]==0)
            q.push(i);

    while(!q.empty()){
        int u=q.front();
        q.pop();
        ans.push_back(u);
        for(int i=0;i<adj[u].size();i++){
            if(--indeg[adj[u][i]]==0)
                q.push(adj[u][i]);
        }
    }

    if(ans.size()==n){
        for(auto x: ans)
            cout<<x<<" ";
    }
    else
        cout<<"No toposort here"<<endl;
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
