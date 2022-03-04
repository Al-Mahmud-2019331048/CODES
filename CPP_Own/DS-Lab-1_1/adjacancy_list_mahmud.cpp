#include<iostream>
#include<vector>
#define sz 1000
using namespace std;

vector<int> adj[sz], weight[sz];

void printList(int n)
{
    for(int i=0;i<n;i++){
        cout << i << ": ";
        for(int j=0;j<adj[i].size();j++)
            cout << "(" << adj[i][j] << "," << weight[i][j]
             << ")" << " \n"[j==adj[i].size()-1];
    }
}

int main()
{
    int x,y,w,m,n;
    cin >> n >> m;

    for(int i=0;i<m;i++){
        cin >> x >> y >> w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        weight[x].push_back(w);
        weight[y].push_back(w);
    }

    printList(n);
    return 0;
}
