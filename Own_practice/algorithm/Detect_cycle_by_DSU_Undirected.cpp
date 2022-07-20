#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int>adj[mxn];
int par[mxn];

int find_par(int n){   //dsu check
    if(par[n]==n) return n;
    return par[n]=find_par(par[n]);
}

void Union(int x,int y){
    x=find_par(x);
    y=find_par(y);
    par[x]=y;
}

bool isCycle(int n){
    int u,v;
    for(int i=0;i<n;i++){
        for(int j=0;j<adj[i].size();i++){
            cout<<i<<" "<<adj[i][j]<<endl;
            u=find_par(i);
            v=find_par(adj[i][j]);

            if(u==v){
                cout<<v<<endl;
                return true;   //same unit,so have cycle
            } 
            //union them
            Union(u,v);
        }
    }
    return false;
}


//parenting
void init(int n){
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
        // adj[y].push_back(x);
    }

    init(nodes);

    if(isCycle(nodes))
        cout<<"Have cycle"<<endl;
    else
        cout<<"No cycle"<<endl;

}

/*
6 9
1 2
1 5
1 4
2 3
2 5
3 5
3 6
4 6
5 6



//another
4 4
0 1
0 3
2 3
1 2
*/