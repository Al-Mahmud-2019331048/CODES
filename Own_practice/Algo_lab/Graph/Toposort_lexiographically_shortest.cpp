#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int> adj[mxn];
int indeg[mxn];

void toposort(int n)
{
    vector<int>ans;
    set<int>s;
    for(int i=0;i<n;i++)
        if(indeg[i]==0)
            s.insert(i);

    while(!s.empty()){
        int u=*s.begin();
        s.erase(s.begin());
        ans.push_back(u);
        for(int i=0;i<adj[u].size();i++){
            if(--indeg[adj[u][i]]==0)
                s.insert(adj[u][i]);
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


all possible ans are:
0 7 5 4 1 2 3 6 
7 0 5 4 1 2 3 6 
7 5 0 4 1 2 3 6
*/
