#include<iostream>
#define sz 1000
using namespace std;

int adj[sz][sz];

void warshallAlgo(int n)
{
    for(int k=0;k<n;k++)
         for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                if(adj[i][k] && adj[k][j])
                    adj[i][j]=adj[i][j]?
                        min(adj[i][j],adj[i][k]+adj[k][j]):
                            adj[i][k]+adj[k][j];
            }


}


void printMatrix(int n)
{
    for (int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            cout << adj[i][j] << " \n"[j==n-1];
}


int main()
{
    int n, m, x, y, w;
    cin >> n >> m;
    for (int i = 0; i<m; i++)
    {
        cin >> x >> y >> w;
        adj[x][y] = w;
        adj[y][x] = w;
    }

    cout << "Before running Warshall's algo:\n";
    printMatrix(n);

    warshallAlgo(n);
    cout << "Before running Warshall's algo:\n";
    printMatrix(n);
    return 0;
}
/**
6 8
5 2 6
1 3 2
4 0 1
3 4 8
0 2 9
5 0 1
0 1 5
0 3 2
*/
