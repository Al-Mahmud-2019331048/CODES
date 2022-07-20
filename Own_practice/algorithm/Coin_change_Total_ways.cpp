#include<bits/stdc++.h>
using namespace std;


// level=amount/least valued coin
//O(n^level)
int coin_change(vector<int>& coins,int amount,int n){

    int dp[n+1][amount+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=1;
    for(int i=1;i<=amount;i++)
        dp[0][i]=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1]>j)
                dp[i][j]=dp[i-1][j];  //exclude
            else
                dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];   //include+exclude
        }
    }
    
    return dp[n][amount];
}


int main()
{
    int n,amount; 
    cin>>n>>amount;
    vector<int> coins(n);
    for(int i=0;i<n;i++)
        cin>>coins[i];
    int ans=coin_change(coins,amount,n);


    cout<<"Total ways: "<<ans<<endl;
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