#include<bits/stdc++.h>
using namespace std;
#define mxn 1000

int dp[mxn][mxn];
string s1,s2;

//O(2^n)
int LCS(int i,int j){
    if(i==s1.size() || j==s2.size())
        return 0;
    int ret=0,ret1=0;
    if(s1[i]==s2[j])
        return ret=1+LCS(i+1,j+1);
    else
        return ret1= max(LCS(i+1,j),LCS(i,j+1));
}

void init(){
    for(int i=0;i<mxn;i++){
        for(int j=0;j<mxn;j++)
            dp[i][j]=0;
    }
}

//O(m*n)
int LCS_dp(int i,int j){
    if(i==s1.size() || j==s2.size())
        return 0;
    if(dp[i][j]!=0) return dp[i][j];
    if(s1[i]==s2[j])
        return dp[i][j]=1+LCS(i+1,j+1);
    else
        return dp[i][j] = max(LCS(i+1,j),LCS(i,j+1));
}

int main()
{
    cin>>s1>>s2;

    int ans=LCS(0,0);
    cout<<ans<<endl;

    init();
    ans=LCS_dp(0,0);
    cout<<ans<<endl;

    cout<<"dp array:"<<endl;
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }

    return 0;

}

/*
bcdaacd
acdbac

badbada
aabddad
*/