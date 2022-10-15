#include <bits/stdc++.h>
using namespace std;
#define mxn 100

int dp[mxn][mxn];
string s1, s2;

void init()
{
    for (int i = 0; i < mxn; i++)
        dp[0][i] = i;
    for (int i = 0; i < mxn; i++)
        dp[i][0] = i;
}

int Edit()
{
    for (int i = 1; i < s1.size(); i++)
    {
        for (int j = 1; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[s1.size()][s2.size()];
}

int main()
{
    cin >> s1 >> s2;

    init();

    // int ans=Edit();
    for (int i = 1; i < s1.size(); i++)
    {
        for (int j = 1; j < s2.size(); j++)
        {
            if (s1[i] == s2[j])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout<<dp[s1.size()][s2.size()]<<endl;

    return 0;
}

/*
bcdaacd
acdbac

badbada
aabddad
*/