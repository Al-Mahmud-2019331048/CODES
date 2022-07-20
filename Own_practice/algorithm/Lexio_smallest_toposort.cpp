#include<bits/stdc++.h>
using namespace std;

#define mxn 1000

vector<int>adj[mxn];
int indeg[mxn];

void toposort(int n){
    multiset<int>s;
    for(int i=0;i<n;i++){
        if(indeg[i]==0)
            s.insert(i);
    }

    vector<int>res;
    int cnt=0;

    while(!s.empty()){
        int u=*s.begin();
        s.erase(s.begin());
        res.push_back(u);
        for(int v=0;v<adj[u].size();v++){
            if(--indeg[adj[u][v]]==0){
                s.insert(adj[u][v]);
            }
        }
        cnt++;
    }

    if(res.size()==0 || cnt!=n){
        cout<<"No toposort can be determined"<<endl;
        return;
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
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

}