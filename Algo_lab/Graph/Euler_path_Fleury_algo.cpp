#include<bits/stdc++.h>
using namespace std;
#define sz 100

//0 based graph

bool vis[sz];
int deg[sz];
bool adj[sz][sz];  //adj matrix
vector< pair<int,int> > path;
int nodes,cnt;

void addEdge(int x,int y){
    adj[x][y]=adj[y][x]=true;
    deg[x]++,deg[y]++;
}

void deleteEdge(int x,int y){
    adj[x][y]=adj[y][x]=false;
    deg[x]--,deg[y]--;
}

bool isPossible(){
    int odd=0;
    for(int i=0;i<nodes;i++)
        if(deg[i]%2) odd++;
    return (odd==2 || odd==0)? true:false;
}

int find_src(){
    if(!isPossible()) return -1;

    int src=0;
    for(int i=0;i<nodes;i++)
        if(deg[i]%2) return i;
    return src;
}

void dfs(int u){
    vis[u]=true;
    cnt++;
    for(int i=0;i<nodes;i++){
        if(!adj[u][i] || vis[i]) continue;
        dfs(i);
    }
}

void init(){
    memset(vis,false,sizeof(vis));
}

bool isBridge(int u,int v){
    init();
    cnt=0;
    dfs(u);
    int before=cnt;

    deleteEdge(u,v); 

    init();
    cnt=0;
    dfs(u);
    int after=cnt;

    return before>after;  //if before>after- bridge

}

void fleury(int u)
{
    vector<int>bridge;

    for(int i=0;i<nodes;i++){
        if(!adj[u][i]) continue; //no edge
        if(isBridge(u,i)){
            bridge.push_back(i);
            continue;
        }

        //if not bridge
        deleteEdge(u,i);
        path.push_back({u,i});
        fleury(i);
        return;
    }

    if(bridge.size()>0){
        deleteEdge(u,bridge[0]);
        path.push_back({u,bridge[0]});
        fleury(bridge[0]);
    }
}

int main()
{
    int edges,x,y;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++){
        cin>>x>>y;
        addEdge(x,y);
    }

    int src=find_src();

    if(src==-1)
        cout<<"No Euler path here"<<endl;
    else{
        fleury(src);
        cout<<"Euler path is:"<<endl;
        for(auto x:path)
            cout<<x.first<<"-"<<x.second<<endl;
    }

    return 0;
}

/*
5 6
0 1
0 3
1 2
1 3
1 4
2 4
*/