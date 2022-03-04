#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    char str[100];
    scanf("%d %d",&x,&y);
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='U') y++;
        else if(str[i]=='D') y--;
        else if(str[i]=='L') x--;
        else if(str[i]=='R') x++;
    }
    printf("%d %d",x,y);
    return 0;
}
