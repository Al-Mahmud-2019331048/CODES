#include <bits/stdc++.h>
using namespace std;
#define mxn 1000

vector<int> adj[mxn];
int par[mxn], level[mxn];
bool vis[mxn];

void init()
{
    for (int i = 0; i < mxn; i++)
        level[i] = -1, par[i] = -1;
}

void Bfs(int st)
{
    init();
    queue<int> q;
    q.push(st);
    vis[st] = true;
    level[st] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i=0;i<adj[u].size();i++)
        {
            int now = adj[u][i];
            if (!vis[now])
            {
                vis[now] = true;
                level[now] = level[u] + 1;
                par[now] = u;
                q.push(now);
            }
        }
    }
}

int main()
{
    int nodes, edges, x, y;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin >> x;
    Bfs(x);

    //1 based node
    for (int i = 1; i <= nodes; i++)
        cout << "dist from " << x << " to " << i << " is : " << level[i] << endl;

    return 0;
}

/*
7 9
1 2
1 3
1 7
2 3
3 7
2 4
4 5
3 6
5 6
1
*/