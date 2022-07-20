#include<bits/stdc++.h>
using namespace std;

#define inf 1<<24


//O(n*amount)
int coin_change(vector<int>& coins,int amount,int n){

    int dp[n+1][amount+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=amount;j++){
            if(j==0) dp[i][j]=0;
            else if(i==0) dp[i][j]=inf;
            else if(coins[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
        }
    }
    return dp[n][amount]==inf ? -1 : dp[n][amount];
}


int main()
{
    int n,amount; 
    cin>>n>>amount;
    vector<int> coins(n);
    for(int i=0;i<n;i++)
        cin>>coins[i];
    int ans=coin_change(coins,amount,n);


    cout<<"Min number of coins: "<<ans<<endl;
    return 0;
}



/*
3 6
1 2 5
*/



// printing dp table
    /*
    for(int i=0;i<=n;i++){
        for(int j=0;j<=amount;j++){
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
*/