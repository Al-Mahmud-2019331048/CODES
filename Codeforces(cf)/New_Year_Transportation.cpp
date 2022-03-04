#include<bits/stdc++.h>
#include<vector>

using namespace std;

#define sz 100010

vector< int >graph[sz];
bool vis[sz];

void dfs(int node){
    vis[node]=1;
    for(int i=0;i<graph[node].size();i++){
        int next=graph[node][i];
        if(vis[next]==0){
            vis[next]==1;
            dfs(next);        }
    }
}


int main(){
    int n,t;
    cin>>n>>t;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        graph[i].push_back(a+i);
    }

    dfs(1);

    if(vis[t]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
