#include <bits/stdc++.h>
using namespace std;
#define mxn 100
int nodes;

vector<int> adj[mxn], rev[mxn];

void dfs1(int i, vector<bool> &vis, stack<int> &st)
{
    vis[i] = true;
    for (int j = 0; j < adj[i].size(); j++)
    {
        if (!vis[adj[i][j]])
        {
            vis[adj[i][j]] = true;
            dfs1(adj[i][j], vis, st);
        }
    }
    st.push(i); // push each node before return;
}

void reverse()
{
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            rev[adj[i][j]].push_back(i);
        }
    }
}

void dfs2(int i, vector<bool> &vis)
{
    cout << i << " ";
    vis[i] = true;
    for (int j = 0; j < rev[i].size(); j++)
    {
        if (!vis[rev[i][j]])
        {
            dfs2(rev[i][j], vis);
        }
    }
}

void kosaraju()
{
    vector<bool> vis(nodes, false);
    stack<int> st;

    for (int i = 0; i < nodes; i++)
    {
        if (!vis[i])
            dfs1(i, vis, st);
    }

    // reverse the graph
    reverse();

    for (int i = 0; i < nodes; i++)
        vis[i] = false;

    cout << "SCCs are: " << endl;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        if (!vis[x])
        {
            dfs2(x, vis);
            cout<<endl;
        }
    }
}

int main()
{
    int edges, x, y;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y); // directed graph
    }

    kosaraju();

    return 0;
}


/*
7 10
0 1
1 2
2 0
2 3
3 4
4 5
4 7
5 6
6 4
6 7
*/