#include<iostream>
#include<vector>
#define sz 100000  //maximum node
using namespace std;

int main()
{
    vector<int>edges[sz];
    vector<int>cost[sz];
    int numNodes,numEdges;
    cin>>numNodes>>numEdges;
    for(int i=0;i<numEdges;i++)
    {
        int x,y,w;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost[x].push_back(w);
        cost[y].push_back(w);
    }
    //print list
    for(int i=0;i<numNodes;i++)
    {
        cout<<i<<":";
        for(int j=0;j<edges[i].size();j++)
        {
            cout<<"("<<edges[i][j]<<","<<cost[i][j]<<")"<<" \n"[j==edges[i].size()-1];
        }
    }

    return 0;
}
