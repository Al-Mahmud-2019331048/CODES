#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    char s1[100],s2[100];
    int res;
    cin>>s1;
    scanf("\n");
    cin>>s2;
    s1=tolower(s1);
    s2=tolower(s2);

    res=strcasecmp(s1,s2);

    printf("%d",res);

    return 0;
}

