#include<bits/stdc++.h>
using namespace std;

#define mxn 1000

//recursion
//O(2^n)
int MCM_recursion(int arr[],int l,int r){

    if(l>=r) return 0;   //base case
    int res=INT_MAX,tmp;

    for(int k=l;k<r;k++){   //// note: k=l (starting point)
        tmp=MCM_recursion(arr,l,k)+ MCM_recursion(arr,k+1,r)+ arr[l-1]*arr[k]*arr[r];
        res =min(res,tmp);
    }
    
    return res;
}

//memoization
//O(n^3)
int dp[mxn][mxn];
int MCM_memoization(int arr[],int l,int r){

    if(l>=r) return 0;   //base case
    if(dp[l][r]!=-1) return dp[l][r];
    int res=INT_MAX,tmp;
    for(int k=l;k<r;k++){    // note: k=l (starting point)
        tmp=MCM_memoization(arr,l,k)+ MCM_recursion(arr,k+1,r)+ arr[l-1]*arr[k]*arr[r];
        res =min(res,tmp);
    }
    return dp[l][r]=res;
}

//Tabulation or Bottom up approach
//O(n^3)
int M[mxn][mxn];
int MCM_tabulation(int arr[],int n){

    for(int chain =2;chain<n;chain++){
        for(int l=1;l<=(n-l);l++){
            int r=l+chain-1;
            M[l][r]=INT_MAX;
            for(int k=l;k<r;k++){
                int cost=M[l][k]+M[k][r] + arr[l-1]*arr[k]*arr[r];
                M[l][r]=min(cost,M[l][r]);
            }
        }
    }
    return M[1][n-1];
}


int main()
{
    int arr[]={1,2,3,4};
    int n=4;

    cout<<"The min Operation is using rec:" << MCM_recursion(arr,1,n-1)<<endl;

    memset(dp,-1,sizeof(dp));
    cout<<"The min Operation is using dp:" << MCM_memoization(arr,1,n-1)<<endl;

    // memset(M,0,sizeof(dp));
    cout<<"The min Operation is using Tabulation:" << MCM_tabulation(arr,n)<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}


/*
3
1 2
2 3
3 4

*/