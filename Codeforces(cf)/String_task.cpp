#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        s[i]=tolower(s[i]);
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
            printf(".%c",s[i]);
    }
    cout<<endl;

    return 0;
}
