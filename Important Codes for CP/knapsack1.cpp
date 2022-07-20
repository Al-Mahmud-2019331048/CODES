#include<bits/stdc++.h>
using namespace std;
#define mxn 100

int w[mxn],p[mxn]; //w[]-weight array , p[]-profit array
int dp[mxn][mxn];
int n,cap;

void init(){
    // cout<<cap<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<mxn;j++)
            dp[i][j]=-1;
}

int knapsack(int idx,int cur_cap){
    if(idx==n || cur_cap==0)
        return 0;
    if(dp[idx][cur_cap]!=-1)
        return dp[idx][cur_cap];
    
    int without=knapsack(idx+1,cur_cap);
    int with=0;
    if(w[idx]<=cur_cap)
        with=knapsack(idx+1,cur_cap-w[idx])+p[idx];

    return dp[idx][cur_cap]=max(with,without);
}


int main()
{
    int cap;
    cin>>n>>cap;
    for (int i = 0; i < n; i++)
        cin>>w[i];
    for(int i=0;i<n;i++)
        cin>>p[i];

    init();

    int ans=knapsack(0,cap);

    cout<<ans<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<cap;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
        

    return 0;
}

/*
4 8
3 4 6 5
20 30 10 40
*/