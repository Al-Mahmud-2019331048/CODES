#include<bits/stdc++.h>
#define sz 10000
using namespace std;

int main()
{
    int n,sum=0;
    char s[sz];
    scanf("%s",s[sz]);
    n=s[sz];
    for(int i=0;i<strlen(s);i++)
    {
        sum+=s[i];
    }
    if(n%sum == 0) printf("Yes");
    else printf("No");
    return 0;
}
