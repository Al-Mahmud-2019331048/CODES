#include<bits/stdc++.h>
using namespace std;

vector<int> dsuf;
//no means here , cz one simple edge is also a cycle
//FIND operation
int find(int v)
{
	if(dsuf[v]==-1)
		return v;
	return find(dsuf[v]);
}

void union_op(int fromP,int toP)
{
	fromP = find(fromP);
	toP = find(toP);
	dsuf[fromP] = toP;
}

bool isCyclic(vector<pair<int,int>>& edge_List)
{
	for(auto p: edge_List)
	{
		int fromP = find(p.first);	//FIND absolute parent of subset
		int toP = find(p.second);

		if(fromP == toP){
			return true;
        }

		//UNION operation
		union_op(fromP,toP);	//UNION of 2 sets
	}
	return false;
}

int main()
{
	int E;	//No of edges
	int V;	//No of vertices (0 to V-1)
	cin>>E>>V;

	dsuf.resize(V,-1);	//Mark all vertices as separate subsets with only 1 element
	vector<pair<int,int>> edge_List;	//Adjacency list
	for(int i=0;i<E;++i)
	{
		int from,to;
		cin>>from>>to;
		edge_List.push_back({from,to});
	}

	if(isCyclic(edge_List))
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
	
	return 0;
}

//TIME COMPLEXITY: O(E.V)





//another code
/*
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

*/