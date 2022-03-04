#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    char s1[100],s2[100];
    int res;
    scanf("%s",s1);
    scanf("%s",s2);

//    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

//    s1=tolower(s1);
//    s2=tolower(s2);

    res=strcasecmp(s1,s2);

    printf("%d",res);

    return 0;
}

