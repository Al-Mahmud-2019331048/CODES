#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

int dp[mxn][mxn];
string s1,s2;

void init(){
    for(int i=0;i<mxn;i++){
        for(int j=0;j<mxn;j++)
            dp[i][j]=0;
    }
}

int LCS_BottomUp(int i,int j){
    if(i==s1.size() || j==s2.size()) return 0;

    if(dp[i][j] != 0) return dp[i][j];

    if(s1[i]==s2[i])
        return dp[i][j]=(1+dp[i-1][j-1]);
    else{
        int ret=max(dp[i-1][j],dp[i][j-1]);
        return ret;
    }

}

int main()
{
    cin>>s1>>s2;

    init();
    int ans=LCS_BottomUp(1,1);

    cout<<dp[s1.size()][s2.size()];

    return 0;
}