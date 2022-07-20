#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

int nodes;
vector<int> adj[mxn];
vector<int>dsu_arr;

int find_par(int n){
    if(dsu_arr[n]==-1)
        return n;
    else
        return dsu_arr[n]=find_par(n); 
}

void union_operation(int x,int y){
    x=find_par(x);
    y=find_par(y);
    dsu_arr[x]=y;
}

bool IsCycle(){
    for(int i=0;i<nodes;i++){
        for(int j=0;j<adj[i].size();j++){
            int par_i=find_par(i);
            int par_j=find_par(j);

            if(par_i==par_j)
                return true;
            union_operation(par_i,par_j);
        }
    }
    return false;
}

  
int main()
{
    int edges,x,y;
    cin>>nodes>>edges;
    dsu_arr.resize(nodes,-1);
    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
    }

    if(IsCycle())
        cout<<"Has cycle";
    else 
        cout<<"No cycle"<<endl; 

    return 0;
}